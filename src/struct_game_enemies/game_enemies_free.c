/*
** EPITECH PROJECT, 2022
** GAME_ENEMIES_FREE.C
** File description:
** GAME_ENEMIES_FREE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

int game_enemies_free_count(game_enemies_t *head)
{
    game_enemies_t *current = head;
    int i = 0;

    while (current != NULL) {
        i++;
        if (current->first_element == 0) {
            sfSprite_destroy(current->sprite);
            sfTexture_destroy(current->texture);
        }
        current = current->next;
    }
    return (i);
}

void game_enemies_free(game_enemies_t *head)
{
    int enemies_nb = game_enemies_free_count(head);
    game_enemies_t *current = head;

    for (int i = 0; i < enemies_nb; i++) {
        game_enemies_delete_first(&head);
        current = current->next;
    }
}
