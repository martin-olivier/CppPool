#include "../Teddy.hpp"
#include "../LittlePony.hpp"

Object ** MyUnitTests()
{
    // Création des 2 jouets
    Object **obj = new Object *[3];

    obj[0] = new LittlePony("happy pony");
    obj[1] = new Teddy("cuddles");
    obj[2] = NULL;

    // Vérification du fonctionnement de la fonction isTaken()
    static_cast<LittlePony*>(obj[0])->isTaken();
    static_cast<Teddy*>(obj[1])->isTaken();

    return obj;
}

int main(void)
{
    MyUnitTests();
    return 0;
}