/*
** EPITECH PROJECT, 2022
** GAME_ENEMIES_DISPLAY.C
** File description:
** GAME_ENEMIES_DISPLAY.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

sfIntRect game_enemies_display_rectangle(settings_t *settings,
    sfIntRect rectangle, game_enemies_t *current)
{
    if (settings->time - current->last_update > 200000) {
        rectangle.top = 0;
        rectangle.left += current->left;
        if (rectangle.left >= current->max_left) {
            rectangle.left = 0;
        }
        rectangle.width = current->width;
        rectangle.height = current->height;
        current->last_update = settings->time;
    }
    return (rectangle);
}

void game_enemies_display(settings_t *settings)
{
    game_enemies_t *current = settings->game_enemies;

    while (current != NULL) {
        if (current->first_element == 0) {
            sfIntRect rectangle = sfSprite_getTextureRect(current->sprite);
            sfVector2f position = { settings->game_map->x + current->x,
                settings->game_map->y + current->y };

            rectangle =
                game_enemies_display_rectangle(settings, rectangle, current);
            sfSprite_setTextureRect(current->sprite, rectangle);
            sfSprite_setPosition(current->sprite, position);
            sfRenderWindow_drawSprite(settings->window, current->sprite, NULL);
        }
        current = current->next;
    }
}
