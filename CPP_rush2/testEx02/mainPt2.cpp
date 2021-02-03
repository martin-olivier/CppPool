/*
** EPITECH PROJECT, 2020
** testEx02
** File description:
** mainPt2.cpp
*/

#include "../Teddy.hpp"
#include "../GiftPaper.hpp"
#include "../Box.hpp"
#include "../Wrap.hpp"
#include "../Object.hpp"

Object * MyUnitTests(Object **obj)
{
    Teddy *teddy = static_cast<Teddy*>(obj[0]);
    Box *box = static_cast<Box*>(obj[1]);
    GiftPaper *giftpaper = static_cast<GiftPaper*>(obj[2]);

    if (!box->is_open())
        box->openMe();
    box->wrapMeThat(teddy);
    giftpaper->wrapMeThat(box);
    return giftpaper;
}

int main(void)
{
    // Préparation du cadeau
    Object *obj[4] = { new Teddy, new Box, new GiftPaper, NULL };
    Object *gift = MyUnitTests(obj);

    // Vérification du cadeau
    GiftPaper *giftpaper = static_cast<GiftPaper*>(gift);

    std::cout << "Check present :" << std::endl;
    if (gift == NULL) //Check si le cadeau existe
        std::cerr << "No present !" << std::endl;
    std::cout << "There is no present !" << std::endl;

    // On enleve le papier cadeau
    Box *box = static_cast<Box*>(giftpaper->unWrapMeThat()); // Faire une fonction qui retourne le contenu de GiftPaper

    // On ouvre le cadeau
    box->openMe();

    // On enléve la Box et on regarde son contenu
    Teddy *teddy = static_cast<Teddy*>(box->unWrapMeThat()); // Faire une fonction qui retourne le contenu de Box
    std::cout << "In the present there is : " << teddy->get_name() << std::endl;
    return 0;
}