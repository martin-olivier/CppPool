/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#ifndef ex00_H
#define ex00_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>
#include <sys/stat.h>

typedef struct cthulhu_s
{
    int m_power;
    char * _name;
} cthulhu_t;

typedef struct koala_s
{
    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t;

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend);
static void cthulhu_initializer(cthulhu_t *this);

cthulhu_t *new_cthulhu(void);
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);
koala_t *new_koala(char *name, char is_a_legend);
void eat(koala_t *this);

#endif