/*
** EPITECH PROJECT, 2022
** MY_PUTCHAR.C
** File description:
** MY_PUTCHAR function.
*/

#include "../inc/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
