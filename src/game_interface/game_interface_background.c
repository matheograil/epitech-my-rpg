/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_BACKGROUND.C
** File description:
** GAME_INTERFACE_BACKGROUND.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_background(settings_t *settings)
{
    if (settings->game_interface->inventory == 1
        || settings->game_interface->skills == 1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_interface->sp_background, NULL);
    }
}
