/*
** EPITECH PROJECT, 2022
** GAME_MAP_OBJECTS_FREE.C
** File description:
** GAME_MAP_OBJECTS_FREE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

int game_map_objects_free_count(game_map_objects_t *head)
{
    game_map_objects_t *current = head;
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

void game_map_objects_free(game_map_objects_t *head)
{
    int objects_nb = game_map_objects_free_count(head);
    game_map_objects_t *current = head;

    for (int i = 0; i < objects_nb; i++) {
        game_map_objects_delete_first(&head);
        current = current->next;
    }
}
