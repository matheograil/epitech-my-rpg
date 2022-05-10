/*
** EPITECH PROJECT, 2022
** GAME_CHARACTERS_FREE.C
** File description:
** GAME_CHARACTERS_FREE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

int game_characters_free_count(game_characters_t *head)
{
    game_characters_t *current = head;
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

void game_characters_free(game_characters_t *head)
{
    int characters_nb = game_characters_free_count(head);
    game_characters_t *current = head;

    for (int i = 0; i < characters_nb; i++) {
        game_characters_delete_first(&head);
        current = current->next;
    }
}
