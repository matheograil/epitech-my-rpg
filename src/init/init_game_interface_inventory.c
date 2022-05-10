/*
** EPITECH PROJECT, 2022
** INIT_GAME_INTERFACE_INVENTORY.C
** File description:
** INIT_GAME_INTERFACE_INVENTORY.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

game_interface_inventory_t *init_game_interface_inventory(void)
{
    game_interface_inventory_t *head =
        malloc(sizeof(game_interface_inventory_t));

    head->next = NULL;
    head->first_element = 1;
    return (head);
}
