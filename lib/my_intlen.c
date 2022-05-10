/*
** EPITECH PROJECT, 2022
** MY_INTLEN.C
** File description:
** MY_INTLEN function.
*/

int my_intlen(int nb)
{
    int i = 0;

    while (nb != 0) {
        nb /= 10;
        i++;
    }
    return (i);
}
