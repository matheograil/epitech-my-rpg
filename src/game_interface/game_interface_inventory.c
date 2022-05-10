/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_INVENTORY.C
** File description:
** GAME_INTERFACE_INVENTORY.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_inventory(settings_t *settings)
{
    if (settings->game_interface->inventory == 1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_interface->sp_inventory, NULL);
    }
}
