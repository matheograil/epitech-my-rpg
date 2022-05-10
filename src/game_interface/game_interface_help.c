/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_HELP.C
** File description:
** GAME_INTERFACE_HELP.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_help(settings_t *settings)
{
    if (settings->game_interface->help == 1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_interface->sp_help, NULL);
    }
}
