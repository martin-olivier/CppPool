#include <iostream>

#include "BaseComponent.hpp"
#include "RefPtr.hpp"

class Printer: public BaseComponent {
public:
    Printer(std::string p = "Will it print ?"): _toPrint(new std::string(p)) {}
    virtual ~Printer() {delete _toPrint; _toPrint = nullptr; }

    void print() const { std::cout << _toPrint << std::endl; }

private:
    std::string * _toPrint;
};

int main()
{
    RefPtr r2; // r1 : 0
    { // anonymous scope
        RefPtr r1 = new Printer;
        r2 = r1;
    } // variable declared inside the scope goes out of scope (r1). Their dtor are called. // one destructor
    //r1 _nb = 0 | r2: _nb = 2; => 1
    Printer *p = static_cast<Printer *>(r2.get()); // dirty but should work. (could not be bothered to dynamic cast, nothing weird)
    p->print(); // will it work ?
    return 0; //there should not be leaks.
}