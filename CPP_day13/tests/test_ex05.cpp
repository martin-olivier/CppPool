#include <ostream>                                                                                                                                                                                       
#include <iostream>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "../ex05/Toy.hpp"
#include "../ex05/Buzz.hpp"
#include "../ex05/Woody.hpp"

class OSRedirector {
    private:
        std::ostringstream _oss;
        std::streambuf *_backup;
        std::ostream &_c;

    public:
        OSRedirector(std::ostream &c) : _c(c) {
            _backup = _c.rdbuf();
            _c.rdbuf(_oss.rdbuf());
        }

        ~OSRedirector() {
            _c.rdbuf(_backup);
        }

        const std::string getContent() {
            _oss << std::flush;
            return _oss.str();
        }
};

Test(test_sujet, test_sujet)
{
    OSRedirector oss(std::cout);
    Woody w("wood") ;
    if (w.setAscii("file_who_does_not_exist.txt") == false) {
        auto e = w.getLastError();
        if (e.type == Toy::Error::PICTURE)
            std::cout << "Error in " << e.where() << ": " << e.what() << std::endl;
    }
    if (w.speak_es(" Woody does not have spanish mode ") == false) {
        auto e = w.getLastError();
        if (e.type == Toy::Error::SPEAK)
            std::cout << "Error in " << e.where () << ": " << e.what() << std::endl;
    }
    if (w.speak_es(" Woody does not have spanish mode ") == false) {
        auto e = w.getLastError();
        if (e.type == Toy::Error::SPEAK)
            std::cout << "Error in " << e.where() << ": " << e.what() << std::endl;
    }
    cr_assert_eq(oss.getContent(), "Error in setAscii: bad new illustration\n"
                        "Error in speak_es: wrong mode\n"
                        "Error in speak_es: wrong mode\n");
}