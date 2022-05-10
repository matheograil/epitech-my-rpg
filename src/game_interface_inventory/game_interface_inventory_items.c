/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_INVENTORY_ITEMS.C
** File description:
** GAME_INTERFACE_INVENTORY_ITEMS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_inventory_items(settings_t *settings)
{
    game_interface_inventory_t *current = settings->game_interface_inventory;

    if (settings->game_interface->inventory == 0) {
        return;
    }
    for (int i = 0, j = 0; current != NULL; current = current->next) {
        if (current->first_element == 1) {
            continue;
        }
        if (i != 0 && i % 9 == 0) {
            i = 0;
            j++;
        }
        sfVector2f position = { 545 + i * 94, 435 + j * 94 };

        sfSprite_setPosition(current->sprite, position);
        sfRenderWindow_drawSprite(settings->window, current->sprite, NULL);
        i++;
    }
}
