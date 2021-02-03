/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "ex00.h"

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend)
{
    printf("----\n");
    printf("Building Cthulhu\n");
    this->m_parent._name = malloc(sizeof(char) * (strlen(_name) + 1));
    strcpy(this->m_parent._name, _name);
    if (_is_A_Legend == 1)
        this->m_parent.m_power = 42;
    else
        this->m_parent.m_power = 0;
    this->m_is_a_legend = _is_A_Legend;
    printf("Building %s\n", this->m_parent._name);
}

static void cthulhu_initializer(cthulhu_t *this)
{
    this->_name = malloc(sizeof(char) * 20);
    strcpy(this->_name, "Cthulhu");
    this->m_power = 42;
    printf("----\n");
    printf("Building Cthulhu\n");
}

cthulhu_t *new_cthulhu(void)
{
    cthulhu_t *tmp = malloc(sizeof(cthulhu_t));
    cthulhu_initializer(tmp);
    return tmp;
}

void print_power(cthulhu_t *this)
{
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t *this)
{
    if (this->m_power >= 42) {
        printf("%s attacks and destroys the city\n", this->_name);
        this->m_power = 0;
    }
    else
        printf("%s can't attack, he doesn't have enough power\n", this->_name);
}

void sleeping(cthulhu_t *this)
{
    printf("%s sleeps\n", this->_name);
    this->m_power += 42000;
}

// KOALA

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *tmp = malloc(sizeof(koala_t));
    koala_initializer(tmp, name, is_a_legend);
    return tmp;
}

void eat(koala_t *this)
{
    printf("%s eats\n", this->m_parent._name);
    this->m_parent.m_power += 42;
}