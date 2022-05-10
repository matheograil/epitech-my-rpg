/*
** EPITECH PROJECT, 2022
** GAME_ACTIONS.C
** File description:
** GAME_ACTIONS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_actions(settings_t *settings)
{
    if (settings->game_interface->inventory == 0
        && settings->game_interface->skills == 0
        && settings->game_interface->help == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyI) == sfTrue) {
            settings->game_interface->inventory = 1;
        }
        if (sfKeyboard_isKeyPressed(sfKeyS) == sfTrue) {
            settings->game_interface->skills = 1;
        }
        if (sfKeyboard_isKeyPressed(sfKeyH) == sfTrue) {
            settings->game_interface->help = 1;
        }
    }
    if (my_strcmp("game_settings", settings->status) != 0
        && sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
        settings->status = "game_settings";
    }
}
