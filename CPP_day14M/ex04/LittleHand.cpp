/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "LittleHand.hpp"

struct InTheMatrixFruit
{
    virtual ~InTheMatrixFruit();
    int vitamins;
};

InTheMatrixFruit::~InTheMatrixFruit()
{

}

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

FruitBox * const *LittleHand::organizeCoconut(Coconut const * const * coconuts)
{
    int size = 0;
    int j = 0;
    for (int i = 0; coconuts[i] != nullptr; i++)
        size++;
    FruitBox **tmp_box = new FruitBox*[(size / 6) + 1];
    for (int i = 0; coconuts[i] != nullptr; j++) {
        tmp_box[j] = new FruitBox(6);
        for (int k = 0; k < 6; k++) {
            if (coconuts[i] == nullptr) {
                tmp_box[j + 1] = nullptr;
                return tmp_box;
            }
            else {
                Coconut *coco_tmp = const_cast<Coconut*>(coconuts[i]);
                tmp_box[j]->putFruit(dynamic_cast<Fruit*>(coco_tmp));
            }
            i++;
        }
    }
    tmp_box[j] = nullptr;
    return tmp_box;
}

void LittleHand::plugMixer(MixerBase &mixer)
{
    static_cast<Mixer&>(mixer).activate();
}

void LittleHand::injectVitamin(Fruit &f, int quantity)
{
    InTheMatrixFruit tmp = reinterpret_cast<InTheMatrixFruit&>(f);
    tmp.vitamins = quantity;
    f = reinterpret_cast<Fruit&>(tmp);
}