/*
** EPITECH PROJECT, 2022
** MY_ITOA.C
** File description:
** MY_ITOA function.
*/

#include "../inc/my.h"

char *my_itoa(int nb)
{
    char *res;
    int nb_len = my_intlen(nb);

    if (nb == 0) {
        res = malloc(sizeof(char) * 2);
        res[0] = '0';
        res[1] = '\0';
        return (res);
    }
    res = malloc(sizeof(char) * (nb_len + 1));
    res[nb_len] = '\0';
    nb_len--;
    while (nb_len >= 0) {
        res[nb_len] = (nb % 10) + '0';
        nb /= 10;
        nb_len--;
    }
    return (res);
}
