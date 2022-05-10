/*
** EPITECH PROJECT, 2022
** FREE_GAME_WEATHER.C
** File description:
** FREE_GAME_WEATHER.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void free_game_weather(game_weather_t *game_weather)
{
    sfSprite_destroy(game_weather->sp_rain);
    sfTexture_destroy(game_weather->tx_rain);
}
