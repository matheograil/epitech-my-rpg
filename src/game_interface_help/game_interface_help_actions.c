/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_HELP_ACTIONS.C
** File description:
** GAME_INTERFACE_HELP_ACTIONS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_help_actions(settings_t *settings)
{
    if (settings->game_interface->help == 1
        && sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue) {
        settings->game_interface->help = 0;
    }
}
