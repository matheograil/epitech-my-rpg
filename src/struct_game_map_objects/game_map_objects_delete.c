/*
** EPITECH PROJECT, 2022
** GAME_MAP_OBJECTS_DELETE.C
** File description:
** GAME_MAP_OBJECTS_DELETE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_map_objects_delete_first(game_map_objects_t **head)
{
    game_map_objects_t *next_node = NULL;

    next_node = (*head)->next;
    free(*head);
    *head = next_node;
}
