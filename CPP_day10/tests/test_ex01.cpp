#include <ostream>                                                                                                                                                                                       
#include <iostream>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "../ex01/Character.hpp"
#include "../ex01/RadScorpion.hpp"
#include "../ex01/PlasmaRifle.hpp"
#include "../ex01/PowerFist.hpp"
#include "../ex01/SuperMutant.hpp"

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
    const auto preda = new Character("Predator");
    const auto prey = new RadScorpion();
    std::cout << *preda;
    AWeapon *pr(new PlasmaRifle());
    AWeapon *pf(new PowerFist());
    preda->equip (pr);
    std::cout << * preda;
    preda->equip (pf);
    preda->attack (prey);
    std::cout << * preda;
    preda->equip (pr);
    std::cout << * preda;
    preda->attack (prey);
    std::cout << * preda;
    preda->attack (prey);
    std::cout << * preda;
    cr_assert_eq(oss.getContent(), "* click click click *\n"
                        "Predator has 40 AP and is unarmed\n"
                        "Predator has 40 AP and wields a Plasma Rifle\n"
                        "Predator attacks RadScorpion with a Power Fist\n"
                        "* pschhh... SBAM! *\n"
                        "Predator has 32 AP and wields a Power Fist\n"
                        "Predator has 32 AP and wields a Plasma Rifle\n"
                        "Predator attacks RadScorpion with a Plasma Rifle\n"
                        "* piouuu piouuu piouuu *\n"
                        "Predator has 27 AP and wields a Plasma Rifle\n"
                        "Predator attacks RadScorpion with a Plasma Rifle\n"
                        "* piouuu piouuu piouuu *\n"
                        "* SPROTCH *\n"
                        "Predator has 22 AP and wields a Plasma Rifle\n");
}

Test(test_sujet2, test_sujet2)
{
    OSRedirector oss(std::cout);
    const auto preda = new Character("Predator");
    const auto prey = new SuperMutant();
    std::cout << *preda;
    AWeapon *pr(new PlasmaRifle());
    AWeapon *pf(new PowerFist());
    preda->equip (pr);
    std::cout << * preda;
    preda->equip (pf);
    preda->attack (prey);
    std::cout << * preda;
    preda->equip (pr);
    std::cout << * preda;
    preda->attack (prey);
    std::cout << * preda;
    preda->attack (prey);
    std::cout << * preda;
    preda->attack (prey);
    std::cout << * preda;
    preda->attack (prey);
    std::cout << * preda;
    preda->attack (prey);
    std::cout << * preda;
    preda->equip (pr);
    std::cout << * preda;
    preda->attack (prey);
    std::cout << * preda;
    cr_assert_eq(oss.getContent(), "Gaaah. Me want smash heads!\n"
                            "Predator has 40 AP and is unarmed\n"
"Predator has 40 AP and wields a Plasma Rifle\n"
"Predator attacks Super Mutant with a Power Fist\n"
"* pschhh... SBAM! *\n"
"Predator has 32 AP and wields a Power Fist\n"
"Predator has 32 AP and wields a Plasma Rifle\n"
"Predator attacks Super Mutant with a Plasma Rifle\n"
"* piouuu piouuu piouuu *\n"
"Predator has 27 AP and wields a Plasma Rifle\n"
"Predator attacks Super Mutant with a Plasma Rifle\n"
"* piouuu piouuu piouuu *\n"
"Predator has 22 AP and wields a Plasma Rifle\n"
"Predator attacks Super Mutant with a Plasma Rifle\n"
"* piouuu piouuu piouuu *\n"
"Predator has 17 AP and wields a Plasma Rifle\n"
"Predator attacks Super Mutant with a Plasma Rifle\n"
"* piouuu piouuu piouuu *\n"
"Predator has 12 AP and wields a Plasma Rifle\n"
"Predator attacks Super Mutant with a Plasma Rifle\n"
"* piouuu piouuu piouuu *\n"
"Predator has 7 AP and wields a Plasma Rifle\n"
"Predator has 7 AP and wields a Plasma Rifle\n"
"Predator attacks Super Mutant with a Plasma Rifle\n"
"* piouuu piouuu piouuu *\n"
"Predator has 2 AP and wields a Plasma Rifle\n");
}

Test(test_perso, test_perso)
{
    OSRedirector oss(std::cout);
    const auto preda = new Character("Predator");
    const auto prey = new SuperMutant();
    AWeapon *pr(new PlasmaRifle());
    AWeapon *pf(new PowerFist());
    preda->equip(nullptr);
    preda->attack(nullptr);
    cr_assert_eq(preda->getWeapon(), nullptr);
}