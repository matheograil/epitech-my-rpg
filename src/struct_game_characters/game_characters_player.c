/*
** EPITECH PROJECT, 2022
** GAME_CHARACTERS_PLAYER.C
** File description:
** GAME_CHARACTERS_PLAYER.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_characters_player_update_status(game_characters_t *head, int status)
{
    game_characters_t *current = head;

    while (current != NULL) {
        if (current->player == 1) {
            current->status = status;
            break;
        }
        current = current->next;
    }
}

int game_characters_player_get_status(game_characters_t *head)
{
    game_characters_t *current = head;

    while (current != NULL) {
        if (current->player == 1) {
            return (current->status);
        }
        current = current->next;
    }
    return (0);
}
