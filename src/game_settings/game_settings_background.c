/*
** EPITECH PROJECT, 2022
** GAME_SETTINGS_BACKGROUND.C
** File description:
** GAME_SETTINGS_BACKGROUND.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_settings_background(settings_t *settings)
{
    sfRenderWindow_drawSprite(settings->window,
        settings->game_settings->sp_background, NULL);
}
