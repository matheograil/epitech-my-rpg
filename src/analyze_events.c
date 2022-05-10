/*
** EPITECH PROJECT, 2022
** ANALYZE_EVENTS.C
** File description:
** ANALYZE_EVENTS.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void analyze_events_buttons(settings_t *settings, sfEvent event)
{
    if (my_strcmp(settings->status, "menu_home") == 0) {
        menu_home_actions(settings, event.mouseButton);
    }
    if (my_strcmp(settings->status, "menu_settings") == 0) {
        menu_settings_actions_one(settings, event.mouseButton);
    }
    if (my_strcmp(settings->status, "game") == 0) {
        if (settings->game_interface->inventory == 1) {
            game_interface_inventory_actions_buttons(settings,
                event.mouseButton);
        }
        if (settings->game_interface->skills == 1) {
            game_interface_skills_actions_buttons(settings, event.mouseButton);
        }
    }
    if (my_strcmp(settings->status, "game_settings") == 0) {
        game_settings_actions(settings, event.mouseButton);
    }
}

void analyze_events(settings_t *settings, sfEvent event)
{
    while (sfRenderWindow_pollEvent(settings->window, &event)) {
        if (event.type == sfEvtClosed) {
            close_window(settings);
        }
        if (event.type == sfEvtMouseButtonPressed) {
            analyze_events_buttons(settings, event);
        }
    }
}
