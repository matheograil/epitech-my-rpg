/*
** EPITECH PROJECT, 2022
** GAME_RESET.C
** File description:
** GAME_RESET.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_reset(settings_t *settings)
{
    settings->life = 3;
    settings->exp = 0;
    settings->damages = 20;
    settings->skills_damages = 0;
    settings->quest_started = 0;
    settings->game_map->x = -400;
    settings->game_map->y = -950;
    game_enemies_reset(settings->game_enemies);
    game_characters_reset(settings->game_characters);
    settings->game_weather->end_rain = settings->time;
    if (settings->game_chat->status != -1) {
        free(settings->game_chat->text);
    }
    settings->game_chat->status = -1;
    settings->game_interface->inventory = 0;
    game_interface_inventory_reset(settings->game_interface_inventory);
    settings->game_interface->skills = 0;
    settings->game_interface->help = 0;
}
