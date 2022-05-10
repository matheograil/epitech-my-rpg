/*
** EPITECH PROJECT, 2022
** FREE_GAME_MAP.C
** File description:
** FREE_GAME_MAP.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void free_game_map(game_map_t *game_map)
{
    sfSprite_destroy(game_map->sp_map);
    sfTexture_destroy(game_map->tx_map);
}
