/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_INVENTORY_ACTIONS.C
** File description:
** GAME_INTERFACE_INVENTORY_ACTIONS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_inventory_actions_keys(settings_t *settings)
{
    if (settings->game_interface->inventory == 1
        && sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue) {
        settings->game_interface->inventory = 0;
    }
}

void game_interface_inventory_actions_buttons(settings_t *settings,
    sfMouseButtonEvent event)
{
    int x = event.x;
    int y = event.y;

    for (int i = 0, j = 0; j < 3; i++) {
        if (i > 8) {
            i = 0;
            j++;
        }
        if (x <= 545 + 94 + i * 94 && x >= 545 + i * 94
            && y <= 435 + 94 + j * 94 && y >= 435 + j * 94) {
            game_interface_inventory_stats_click(settings, i, j);
        }
    }
}
