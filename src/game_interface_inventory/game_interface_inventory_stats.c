/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_INVENTORY_STATS.C
** File description:
** GAME_INTERFACE_INVENTORY_STATS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_inventory_stats_auto(settings_t *settings)
{
    game_interface_inventory_t *current = settings->game_interface_inventory;

    while (current != NULL) {
        if (current->first_element == 0
            && my_strcmp(current->type, "sword") == 0) {
            settings->damages = 50 + settings->skills_damages;
        }
        current = current->next;
    }
}

int game_interface_inventory_stats_click_apple(settings_t *settings,
    game_interface_inventory_t *current)
{
    if (my_strcmp(current->type, "apple") == 0 && settings->life < 3) {
        settings->life++;
        return (1);
    }
    return (0);
}

int game_interface_inventory_stats_click_life_potion(settings_t *settings,
    game_interface_inventory_t *current)
{
    if (my_strcmp(current->type, "life_potion") == 0 && settings->life < 2) {
        settings->life += 2;
        return (1);
    }
    return (0);
}

void game_interface_inventory_stats_click(settings_t *settings, int i, int j)
{
    game_interface_inventory_t *current = settings->game_interface_inventory;
    int item_nb = i + 1 + j * 9;

    for (int k = 0; current != NULL; k++, current = current->next) {
        if (current->first_element == 1 || k != item_nb) {
            continue;
        }
        if (game_interface_inventory_stats_click_apple(settings, current) == 1
            || game_interface_inventory_stats_click_life_potion(settings,
            current) == 1) {
            sfSound_play(settings->sound_click);
            game_interface_inventory_delete(&settings->game_interface_inventory,
                item_nb);
            break;
        }
    }
}
