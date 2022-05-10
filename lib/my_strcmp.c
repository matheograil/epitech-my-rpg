/*
** EPITECH PROJECT, 2022
** MY_STRCMP.C
** File description:
** MY_STRCMP function.
*/

#include "../inc/my.h"

int my_strcmp(char *str1, char *str2)
{
    int i = 0;
    int res;

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
        i++;
    }
    res = str1[i] - str2[i];
    return (res);
}
