/*
** EPITECH PROJECT, 2022
** GAME_CHARACTERS_PLAYER.C
** File description:
** GAME_CHARACTERS_PLAYER.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

int game_characters_player_rectangle_top(settings_t *settings)
{
    if (game_characters_player_get_status(settings->game_characters) == 0) {
        return (65 * 3);
    }
    if (game_characters_player_get_status(settings->game_characters) == 1) {
        return (65 * 2);
    }
    if (game_characters_player_get_status(settings->game_characters) == 3) {
        return (65);
    }
    return (0);
}

sfIntRect game_characters_player_rectangle(settings_t *settings,
    sfIntRect rectangle, game_characters_t *current)
{
    if (settings->time - current->last_update > 200000) {
        rectangle.top = game_characters_player_rectangle_top(settings);
        rectangle.left += 65;
        if (rectangle.left >= 256) {
            rectangle.left = 0;
        }
        rectangle.width = 70;
        rectangle.height = 65;
        current->last_update = settings->time;
    }
    return (rectangle);
}

void game_characters_player(settings_t *settings)
{
    game_characters_t *current = settings->game_characters;

    while (current != NULL) {
        if (current->first_element == 0 && current->player == 1) {
            sfIntRect rectangle = sfSprite_getTextureRect(current->sprite);
            sfVector2f position = { current->x, current->y };

            rectangle =
                game_characters_player_rectangle(settings, rectangle, current);
            sfSprite_setTextureRect(current->sprite, rectangle);
            sfSprite_setPosition(current->sprite, position);
            sfRenderWindow_drawSprite(settings->window, current->sprite, NULL);
            break;
        }
        current = current->next;
    }
}
