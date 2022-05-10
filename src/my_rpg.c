/*
** EPITECH PROJECT, 2022
** MY_RPG.C
** File description:
** MY_RPG.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

int main(int ac, char **av)
{
    settings_t *settings;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        print_help();
        return (0);
    }
    settings = init_settings_one();
    create_window(settings);
    return (0);
}
