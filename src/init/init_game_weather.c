/*
** EPITECH PROJECT, 2022
** INIT_GAME_WEATHER.C
** File description:
** INIT_GAME_WEATHER.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

game_weather_t *init_game_weather(void)
{
    static game_weather_t game_weather;
    sfVector2f rain_scale = { 8, 8 };

    game_weather.end_rain = 0;
    game_weather.last_update_rain = 0;
    game_weather.sp_rain = sfSprite_create();
    game_weather.tx_rain =
        sfTexture_createFromFile("./res/game_weather/rain.png", NULL);
    sfSprite_setTexture(game_weather.sp_rain, game_weather.tx_rain, sfTrue);
    sfSprite_setScale(game_weather.sp_rain, rain_scale);
    return (&game_weather);
}
