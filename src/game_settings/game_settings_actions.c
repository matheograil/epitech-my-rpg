/*
** EPITECH PROJECT, 2022
** GAME_SETTINGS_ACTIONS.C
** File description:
** GAME_SETTINGS_ACTIONS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_settings_actions(settings_t *settings, sfMouseButtonEvent event)
{
    int x = event.x;
    int y = event.y;

    if (x <= 494 && x >= 300 && y <= 269 && y >= 232) {
        sfSound_play(settings->sound_click);
        settings->status = "game";
    }
    if (x <= 588 && x >= 210 && y <= 369 && y >= 323) {
        sfSound_play(settings->sound_click);
        game_reset(settings);
        settings->status = "menu_home";
    }
    if (x <= 536 && x >= 258 && y <= 466 && y >= 430) {
        sfSound_play(settings->sound_click);
        sfRenderWindow_close(settings->window);
    }
}
