/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_INVENTORY_DELETE.C
** File description:
** GAME_INTERFACE_INVENTORY_DELETE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_inventory_delete_first(game_interface_inventory_t **head)
{
    game_interface_inventory_t *next_node = NULL;

    next_node = (*head)->next;
    free(*head);
    *head = next_node;
}

void game_interface_inventory_delete(game_interface_inventory_t **head,
    int item_nb)
{
    game_interface_inventory_t *current = *head;
    game_interface_inventory_t *temp_node = NULL;

    if (item_nb != 0) {
        for (int i = 0; i < item_nb - 1; i++) {
            current = current->next;
        }
        temp_node = current->next;
        current->next = temp_node->next;
        free(temp_node);
    }
}
