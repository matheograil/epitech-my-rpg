/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_INVENTORY_RESET.C
** File description:
** GAME_INTERFACE_INVENTORY_RESET.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_inventory_reset(game_interface_inventory_t *head)
{
    int items_nb = game_interface_inventory_free_count(head);
    game_interface_inventory_t *current = head;

    for (int i = 0; i < items_nb - 1; i++) {
        game_interface_inventory_delete(&head, 1);
        current = current->next;
    }
}
