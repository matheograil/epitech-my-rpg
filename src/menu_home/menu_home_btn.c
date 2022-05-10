/*
** EPITECH PROJECT, 2022
** MENU_HOME_BTN.C
** File description:
** MENU_HOME_BTN.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_home_btn(settings_t *settings)
{
    if (settings->menu_home->element_selected == -1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_settings, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_play, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_exit, NULL);
    }
    menu_home_btn_pressed_play(settings);
    menu_home_btn_pressed_settings(settings);
    menu_home_btn_pressed_quit(settings);
}
