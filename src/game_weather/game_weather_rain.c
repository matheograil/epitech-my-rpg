/*
** EPITECH PROJECT, 2022
** GAME_WEATHER_RAIN.C
** File description:
** GAME_WEATHER_RAIN.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_weather_rain_random(settings_t *settings)
{
    if (settings->game_weather->end_rain < settings->time
        && settings->time - settings->game_weather->last_update_rain
        > 1000000) {
        if (rand() % 2 == 1) {
            settings->game_weather->end_rain = settings->time + 100000000;
        }
        settings->game_weather->last_update_rain = settings->time;
    }
}

void game_weather_rain(settings_t *settings)
{
    if (settings->game_weather->end_rain > settings->time) {
        sfIntRect rectangle =
            sfSprite_getTextureRect(settings->game_weather->sp_rain);

        if (settings->time - settings->game_weather->last_update_rain
            > 1000000) {
            rectangle.top = 0;
            rectangle.left += 256;
            (rectangle.left >= 1024) ? (rectangle.left = 0) : (0);
            rectangle.width = 256;
            rectangle.height = 240;
            settings->game_weather->last_update_rain = settings->time;
        }
        sfSprite_setTextureRect(settings->game_weather->sp_rain, rectangle);
        sfRenderWindow_drawSprite(settings->window,
            settings->game_weather->sp_rain, NULL);
    }
    game_weather_rain_random(settings);
}
