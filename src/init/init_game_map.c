/*
** EPITECH PROJECT, 2022
** INIT_GAME_MAP.C
** File description:
** INIT_GAME_MAP.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

game_map_t *init_game_map(void)
{
    static game_map_t game_map;
    sfVector2f map_scale = { 0.5, 0.5 };

    game_map.x = -400;
    game_map.y = -950;
    game_map.last_update = 0;
    game_map.sp_map = sfSprite_create();
    game_map.tx_map = sfTexture_createFromFile("./res/game_map/map.png", NULL);
    sfSprite_setTexture(game_map.sp_map, game_map.tx_map, sfTrue);
    sfSprite_setScale(game_map.sp_map, map_scale);
    return (&game_map);
}
