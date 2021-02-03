/*
** EPITECH PROJECT, 2021
** mainPt3.cpp
** File description:
** Santa Claus
*/

#include "../Box.hpp"
#include "../ConveyorBeltRand.hpp"
#include "../GiftPaper.hpp"
#include "../IConveyorBelt.hpp"
#include "../IElf.hpp"
#include "../ITable.hpp"
#include "../LittlePony.hpp"
#include "../Object.hpp"
#include "../PapaXmasConveyorBelt.hpp"
#include "../PapaXmasElf.hpp"
#include "../PapaXmasConveyorBelt.hpp"
#include "../TableRand.hpp"
#include "../Teddy.hpp"
#include "../Toy.hpp"
#include "../Wrap.hpp"

PapaXmasTable *createTable()
{
    return new PapaXmasTable;
}

PapaXmasConveyorBelt *createConveyorBelt()
{
    return new PapaXmasConveyorBelt;
}

int main()
{
    PapaXmasTable *table = createTable();
    PapaXmasConveyorBelt *tapis = createConveyorBelt();

    PapaXmasElf *elf = new PapaXmasElf(table, tapis);

    elf->in();
    elf->take();
    elf->open(elf->get_in_hands());
    elf->wrap(elf->get_in_hands(), 0);
    elf->close(elf->get_in_hands());
    elf->put();
    elf->out();
}