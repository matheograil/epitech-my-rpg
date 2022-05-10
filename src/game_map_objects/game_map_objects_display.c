/*
** EPITECH PROJECT, 2022
** GAME_MAP_OBJECTS_DISPLAY.C
** File description:
** GAME_MAP_OBJECTS_DISPLAY.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_map_objects_display(settings_t *settings)
{
    game_map_objects_t *current = settings->game_map_objects;

    while (current != NULL) {
        if (current->first_element == 0) {
            sfVector2f position = { settings->game_map->x + current->x,
                settings->game_map->y + current->y };

            sfSprite_setPosition(current->sprite, position);
            sfRenderWindow_drawSprite(settings->window, current->sprite, NULL);
        }
        current = current->next;
    }
}
