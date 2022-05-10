/*
** EPITECH PROJECT, 2022
** GAME_ENEMIES_RESET.C
** File description:
** GAME_ENEMIES_RESET.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_enemies_reset(game_enemies_t *head)
{
    int enemies_nb = game_enemies_free_count(head);
    game_enemies_t *current = head;

    for (int i = 0; i < enemies_nb - 1; i++) {
        game_enemies_delete(&head, 1);
        current = current->next;
    }
}
