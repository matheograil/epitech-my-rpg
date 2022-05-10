/*
** EPITECH PROJECT, 2022
** GAME_ENEMIES_DELETE.C
** File description:
** GAME_ENEMIES_DELETE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_enemies_delete_first(game_enemies_t **head)
{
    game_enemies_t *next_node = NULL;

    next_node = (*head)->next;
    free(*head);
    *head = next_node;
}

void game_enemies_delete(game_enemies_t **head, int j)
{
    int i = 0;
    game_enemies_t *current = *head;
    game_enemies_t *temp_node = NULL;

    if (j != 0) {
        for (i = 0; i < j - 1; i++) {
            current = current->next;
        }
        temp_node = current->next;
        current->next = temp_node->next;
        free(temp_node);
    }
}
