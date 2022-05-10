/*
** EPITECH PROJECT, 2022
** MENU_SETTINGS_MOUSE.C
** File description:
** MENU_SETTINGS_MOUSE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_settings_mouse_one(settings_t *settings)
{
    sfVector2i mouse_position =
        sfMouse_getPosition((sfWindow *)settings->window);
    int x = mouse_position.x;
    int y = mouse_position.y;
    int temp = 0;

    if (x <= 714 && x >= 670 && y <= 451 && y >= 421) {
        temp = 1;
        settings->menu_settings->element_selected = 0;
    }
    if (x <= 1219 && x >= 1179 && y <= 454 && y >= 416) {
        temp = 1;
        settings->menu_settings->element_selected = 1;
    }
    if (x <= 753 && x >= 646 && y <= 614 && y >= 556) {
        temp = 1;
        settings->menu_settings->element_selected = 2;
    }
    menu_settings_mouse_two(settings, x, y, temp);
}

void menu_settings_mouse_two(settings_t *settings, int x, int y, int temp)
{
    if (x <= 1272 && x >= 1126 && y <= 614 && y >= 558) {
        temp = 1;
        settings->menu_settings->element_selected = 3;
    }
    if (x <= 1066 && x >= 858 && y <= 735 && y >= 681) {
        temp = 1;
        settings->menu_settings->element_selected = 4;
    }
    if (temp == 0) {
        settings->menu_settings->element_selected = -1;
    }
}
