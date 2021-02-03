/*
** EPITECH PROJECT, 2021
** func_ptr.c
** File description:
** func_ptr
*/

#include "castmania.h"
#include <stdio.h>

void exec_operation_ext(instruction_type_t instruction_type, instruction_t *tmp)
{
    if (instruction_type == DIV_OPERATION) {
        exec_div(tmp->operation);
        if (tmp->output_type == VERBOSE) {
            division_t *resdivtmp = tmp->operation;
            if (resdivtmp->div_type == INTEGER) {
                integer_op_t *inttmp = (integer_op_t*)resdivtmp->div_op;
                printf("%d\n", inttmp->res);
            }
            if (resdivtmp->div_type == DECIMALE) {
                decimale_op_t *dectmp = (decimale_op_t*)resdivtmp->div_op;
                printf("%f\n", dectmp->res);
            }
        }
    }
}

void exec_operation(instruction_type_t instruction_type , void *data)
{
    instruction_t *tmp = (instruction_t*)data;
    if (instruction_type == ADD_OPERATION) {
        exec_add(tmp->operation);
        if (tmp->output_type == VERBOSE) {
            addition_t *resaddtmp = tmp->operation;
            printf("%d\n", resaddtmp->add_op.res);
        }
    }
    exec_operation_ext(instruction_type, tmp);
}

void exec_instruction(instruction_type_t instruction_type , void *data)
{
    if (instruction_type == PRINT_INT)
        printf("%d\n", *(int*)data);
    else if (instruction_type == PRINT_FLOAT)
        printf("%f\n", *(float*)data);
    else {
        exec_operation(instruction_type, data);
    }
}