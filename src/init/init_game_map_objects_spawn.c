/*
** EPITECH PROJECT, 2022
** INIT_GAME_MAP_OBJECTS_SPAWN.C
** File description:
** INIT_GAME_MAP_OBJECTS_SPAWN.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void init_game_map_objects_spawn_churches(game_map_objects_t *game_map_objects)
{
    int position[2] = { 5500, 2000 };

    game_map_objects_add(game_map_objects, position, 1, "church");
}

void init_game_map_objects_spawn_houses(game_map_objects_t *game_map_objects)
{
    int position[2];

    for (int i = 0; i < 5; i++) {
        position[0] = 1500 + 1000 * i;
        position[1] = 550;
        game_map_objects_add(game_map_objects, position, 3, "house");
    }
}

void init_game_map_objects_spawn_lakes(game_map_objects_t *game_map_objects)
{
    int position[2] = { 2000, 3400 };

    game_map_objects_add(game_map_objects, position, 3, "lake");
}

void init_game_map_objects_spawn_rocks(game_map_objects_t *game_map_objects)
{
    int position[2] = { 2000, 2000 };

    game_map_objects_add(game_map_objects, position, 1, "rock");
    position[0] = 4000;
    position[1] = 2500;
    game_map_objects_add(game_map_objects, position, 1, "rock");

}

void init_game_map_objects_spawn_trees(game_map_objects_t *game_map_objects)
{
    int position[2];

    for (int i = 0; i < 14; i++) {
        position[0] = 1600 + 400 * i;
        position[1] = 5700;
        game_map_objects_add(game_map_objects, position, 1, "tree");
        position[1] = 6000;
        game_map_objects_add(game_map_objects, position, 1, "tree");
        position[1] = 6300;
        game_map_objects_add(game_map_objects, position, 1, "tree");
    }
}
