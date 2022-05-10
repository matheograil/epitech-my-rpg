/*
** EPITECH PROJECT, 2022
** GAME_MAP_ACTIONS.C
** File description:
** GAME_MAP_ACTIONS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

int game_map_actions_up(settings_t *settings, int temp)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue
        && settings->game_map->y <= -10
        && game_map_objects_collisions(settings, 0) == 0
        && game_characters_collisions(settings, 0) == 0
        && game_enemies_collisions(settings, 0) == 0) {
        temp = 1;
        game_characters_player_update_status(settings->game_characters, 0);
        settings->game_map->y += 10;
    }
    return (temp);
}

int game_map_actions_right(settings_t *settings, int temp)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue
        && settings->game_map->x >= -6070
        && game_map_objects_collisions(settings, 1) == 0
        && game_characters_collisions(settings, 1) == 0
        && game_enemies_collisions(settings, 1) == 0) {
        temp = 1;
        game_characters_player_update_status(settings->game_characters, 1);
        settings->game_map->x -= 10;
    }
    return (temp);
}

int game_map_actions_down(settings_t *settings, int temp)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue
        && settings->game_map->y >= -6910
        && game_map_objects_collisions(settings, 2) == 0
        && game_characters_collisions(settings, 2) == 0
        && game_enemies_collisions(settings, 2) == 0) {
        settings->game_map->y -= 10;
    }
    return (temp);
}

int game_map_actions_left(settings_t *settings, int temp)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue
        && settings->game_map->x <= -10
        && game_map_objects_collisions(settings, 3) == 0
        && game_characters_collisions(settings, 3) == 0
        && game_enemies_collisions(settings, 3) == 0) {
        temp = 1;
        game_characters_player_update_status(settings->game_characters, 3);
        settings->game_map->x += 10;
    }
    return (temp);
}

void game_map_actions(settings_t *settings)
{
    int temp = 0;

    if (settings->game_map->last_update + 10000 < settings->time
        && settings->game_chat->status == -1) {
        temp = game_map_actions_up(settings, temp);
        temp = game_map_actions_right(settings, temp);
        temp = game_map_actions_down(settings, temp);
        temp = game_map_actions_left(settings, temp);
        if (temp == 0) {
            game_characters_player_update_status(settings->game_characters, 2);
        }
        settings->game_map->last_update = settings->time;
    }
}
