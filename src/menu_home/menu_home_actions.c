/*
** EPITECH PROJECT, 2022
** MENU_HOME_ACTIONS.C
** File description:
** MENU_HOME_ACTIONS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_home_actions(settings_t *settings, sfMouseButtonEvent event)
{
    int x = event.x;
    int y = event.y;

    if (x <= 266 && x >= 137 && y <= 417 && y >= 375) {
        sfSound_play(settings->sound_click);
        game_init(settings);
        settings->status = "game";
    }
    if (x <= 319 && x >= 88 && y <= 520 && y >= 476) {
        sfSound_play(settings->sound_click);
        settings->status = "menu_settings";
    }
    if (x <= 254 && x >= 150 && y <= 620 && y >= 576) {
        sfSound_play(settings->sound_click);
        close_window(settings);
    }
}
