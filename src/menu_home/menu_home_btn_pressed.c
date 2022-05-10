/*
** EPITECH PROJECT, 2022
** MENU_HOME_BTN_PRESSED.C
** File description:
** MENU_HOME_BTN_PRESSED.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_home_btn_pressed_play(settings_t *settings)
{
    if (settings->menu_home->element_selected == 0) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_settings, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_play_pressed, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_exit, NULL);
    }
}

void menu_home_btn_pressed_settings(settings_t *settings)
{
    if (settings->menu_home->element_selected == 1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_settings_pressed, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_play, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_exit, NULL);
    }
}

void menu_home_btn_pressed_quit(settings_t *settings)
{
    if (settings->menu_home->element_selected == 2) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_settings, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_play, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_home->sp_exit_pressed, NULL);
    }
}
