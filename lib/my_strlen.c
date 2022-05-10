/*
** EPITECH PROJECT, 2021
** MY_STRLEN.C
** File description:
** MY_STRLEN function.
*/

#include "../inc/my.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
