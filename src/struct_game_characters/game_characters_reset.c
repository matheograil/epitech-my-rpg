/*
** EPITECH PROJECT, 2022
** GAME_CHARACTERS_RESET.C
** File description:
** GAME_CHARACTERS_RESET.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_characters_reset(game_characters_t *head)
{
    game_characters_t *current = head;

    while (current != NULL) {
        if (current->first_element == 0) {
            current->chat = 0;
        }
        current = current->next;
    }
}
