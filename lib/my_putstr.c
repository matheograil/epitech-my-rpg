/*
** EPITECH PROJECT, 2022
** MY_PUTSTR.C
** File description:
** MY_PUTSTR function.
*/

#include "../inc/my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
