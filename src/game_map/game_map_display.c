/*
** EPITECH PROJECT, 2022
** GAME_MAP_DISPLAY.C
** File description:
** GAME_MAP_DISPLAY.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_map_display(settings_t *settings)
{
    sfVector2f position = { settings->game_map->x, settings->game_map->y };

    sfSprite_setPosition(settings->game_map->sp_map, position);
    sfRenderWindow_drawSprite(settings->window, settings->game_map->sp_map,
        NULL);
}
