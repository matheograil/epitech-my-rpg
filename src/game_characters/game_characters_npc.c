/*
** EPITECH PROJECT, 2022
** GAME_CHARACTERS_NPC.C
** File description:
** GAME_CHARACTERS_NPC.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_characters_npc(settings_t *settings)
{
    game_characters_t *current = settings->game_characters;

    while (current != NULL) {
        if (current->first_element == 0 && current->player == 0) {
            sfVector2f position = { settings->game_map->x + current->x,
                settings->game_map->y + current->y };

            sfSprite_setPosition(current->sprite, position);
            sfRenderWindow_drawSprite(settings->window, current->sprite, NULL);
        }
        current = current->next;
    }
}
