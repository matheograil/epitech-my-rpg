/*
** EPITECH PROJECT, 2022
** GAME_ENEMIES_SPWAWN.C
** File description:
** GAME_ENEMIES_SPWAWN.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_enemies_spawn_goblins(settings_t *settings)
{
    game_enemies_add_t game_enemy;

    game_enemy.type = "goblin";
    game_enemy.x = 5500;
    game_enemy.y = 6800;
    game_enemy.start = 50;
    game_enemy.left = 150;
    game_enemy.max_left = 600;
    game_enemy.width = 150;
    game_enemy.height = 38;
    game_enemy.scale = 5;
    game_enemies_add_one(settings->game_enemies, &game_enemy);
    game_enemy.x = 5500;
    game_enemy.y = 7200;
    game_enemies_add_one(settings->game_enemies, &game_enemy);
}

void game_enemies_spawn_skeletons(settings_t *settings)
{
    game_enemies_add_t game_enemy;

    game_enemy.type = "skeleton";
    game_enemy.x = 6000;
    game_enemy.y = 7000;
    game_enemy.start = 45;
    game_enemy.left = 150;
    game_enemy.max_left = 600;
    game_enemy.width = 150;
    game_enemy.height = 53;
    game_enemy.scale = 4;
    game_enemies_add_one(settings->game_enemies, &game_enemy);
}

void game_enemies_spawn(settings_t *settings)
{
    game_enemies_spawn_goblins(settings);
    game_enemies_spawn_skeletons(settings);
}
