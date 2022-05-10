/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_INVENTORY_FREE.C
** File description:
** GAME_INTERFACE_INVENTORY_FREE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

int game_interface_inventory_free_count(game_interface_inventory_t *head)
{
    game_interface_inventory_t *current = head;
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

void game_interface_inventory_free(game_interface_inventory_t *head)
{
    int items_nb = game_interface_inventory_free_count(head);
    game_interface_inventory_t *current = head;

    for (int i = 0; i < items_nb; i++) {
        game_interface_inventory_delete_first(&head);
        current = current->next;
    }
}
