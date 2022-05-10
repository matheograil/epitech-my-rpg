/*
** EPITECH PROJECT, 2022
** MENU_SETTINGS_ACTIONS.C
** File description:
** MENU_SETTINGS_ACTIONS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_settings_actions_one(settings_t *settings, sfMouseButtonEvent event)
{
    int x = event.x;
    int y = event.y;

    if (x <= 714 && x >= 670 && y <= 451 && y >= 421) {
        sfSound_play(settings->sound_click);
        set_volume(settings, -10);
    }
    if (x <= 1219 && x >= 1179 && y <= 454 && y >= 416) {
        sfSound_play(settings->sound_click);
        set_volume(settings, 10);
    }
    if (x <= 753 && x >= 646 && y <= 614 && y >= 556) {
        sfSound_play(settings->sound_click);
        sfRenderWindow_setFramerateLimit(settings->window, 60);
    }
    if (x <= 1272 && x >= 1126 && y <= 614 && y >= 558) {
        sfSound_play(settings->sound_click);
        sfRenderWindow_setFramerateLimit(settings->window, 120);
    }
    menu_settings_actions_two(settings, x, y);
}

void menu_settings_actions_two(settings_t *settings, int x, int y)
{
    if (x <= 1066 && x >= 858 && y <= 735 && y >= 681) {
        sfSound_play(settings->sound_click);
        settings->status = "menu_home";
    }
}
