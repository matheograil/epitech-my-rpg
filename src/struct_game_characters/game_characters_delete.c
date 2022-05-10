/*
** EPITECH PROJECT, 2022
** GAME_CHARACTERS_DELETE.C
** File description:
** GAME_CHARACTERS_DELETE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_characters_delete_first(game_characters_t **head)
{
    game_characters_t *next_node = NULL;

    next_node = (*head)->next;
    free(*head);
    *head = next_node;
}
