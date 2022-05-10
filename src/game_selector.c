/*
** EPITECH PROJECT, 2022
** GAME_SELECTOR.C
** File description:
** GAME_SELECTOR.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void game_selector_one(settings_t *settings)
{
    if (my_strcmp(settings->status, "game") == 0) {
        game_actions(settings);
        game_map_actions(settings);
        game_chat_actions(settings);
        game_interface_inventory_actions_keys(settings);
        game_interface_skills_actions_keys(settings);
        game_interface_help_actions(settings);
        game_map_display(settings);
        game_map_objects_display(settings);
        game_enemies_deaths(settings);
        game_enemies_display(settings);
        game_characters_npc(settings);
        game_characters_player(settings);
        game_weather_rain(settings);
        game_chat_box(settings);
        game_hud_hearts(settings);
        game_hud_exp(settings);
        game_selector_two(settings);
    }
    game_settings_selector(settings);
}

void game_selector_two(settings_t *settings)
{
    game_interface_background(settings);
    game_interface_inventory(settings);
    game_interface_inventory_items(settings);
    game_interface_inventory_stats_auto(settings);
    game_interface_skills(settings);
    game_interface_help(settings);
    game_over(settings);
}

void game_settings_selector(settings_t *settings)
{
    if (my_strcmp(settings->status, "game_settings") == 0) {
        game_settings_background(settings);
        game_settings_btn(settings);
        game_settings_mouse(settings);
    }
}
