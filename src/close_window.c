/*
** EPITECH PROJECT, 2022
** CLOSE_WINDOW.C
** File description:
** CLOSE_WINDOW.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void close_window(settings_t *settings)
{
    game_map_objects_free(settings->game_map_objects);
    game_enemies_free(settings->game_enemies);
    game_characters_free(settings->game_characters);
    game_interface_inventory_free(settings->game_interface_inventory);
    free_settings(settings);
    free_menu_home(settings->menu_home);
    free_menu_settings(settings->menu_settings);
    free_game_map(settings->game_map);
    free_game_weather(settings->game_weather);
    free_game_chat(settings->game_chat);
    free_game_hud(settings->game_hud);
    free_game_interface(settings->game_interface);
    free_game_settings(settings->game_settings);
    sfRenderWindow_destroy(settings->window);
}
