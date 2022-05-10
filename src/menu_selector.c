/*
** EPITECH PROJECT, 2022
** MENU_SELECTOR.C
** File description:
** MENU_SELECTOR.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void menu_selector(settings_t *settings)
{
    if (my_strcmp(settings->status, "menu_home") == 0) {
        menu_home_background(settings);
        menu_home_logo(settings);
        menu_home_btn(settings);
        menu_home_mouse(settings);
    }
    if (my_strcmp(settings->status, "menu_settings") == 0) {
        menu_settings_background(settings);
        menu_settings_board(settings);
        menu_settings_btn(settings);
        menu_settings_mouse_one(settings);
    }
}
