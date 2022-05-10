/*
** EPITECH PROJECT, 2022
** GAME_HUD_HEARTS.C
** File description:
** GAME_HUD_HEARTS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_hud_hearts(settings_t *settings)
{
    if (settings->life >= 1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_hud->sp_heart_one, NULL);
    }
    if (settings->life >= 2) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_hud->sp_heart_two, NULL);
    }
    if (settings->life >= 3) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_hud->sp_heart_three, NULL);
    }
}
