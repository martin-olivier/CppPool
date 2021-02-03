/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "LittleHand.hpp"

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
    FruitBox tmpbox(unsorted.nbFruits() + 1);
    while (unsorted.nbFruits() != 0) {
        Fruit *hand = unsorted.pickFruit();
        if (dynamic_cast<Banana*>(hand)) {
            if (bananas.putFruit(hand) == false)
                tmpbox.putFruit(hand);
        }
        else if (dynamic_cast<Lime*>(hand)) {
            if (limes.putFruit(hand) == false)
                tmpbox.putFruit(hand);
        }
        else if (dynamic_cast<Lemon*>(hand)) {
            if (lemons.putFruit(hand) == false)
                tmpbox.putFruit(hand);
        }
        else {
            tmpbox.putFruit(hand);
        }
    }
    while (tmpbox.nbFruits() != 0) {
        Fruit *hand = tmpbox.pickFruit();
        unsorted.putFruit(hand);
    }
}