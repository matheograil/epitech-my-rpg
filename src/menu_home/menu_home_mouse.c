/*
** EPITECH PROJECT, 2022
** MENU_HOME_MOUSE.C
** File description:
** MENU_HOME_MOUSE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_home_mouse(settings_t *settings)
{
    sfVector2i mouse_position =
        sfMouse_getPosition((sfWindow *)settings->window);
    int x = mouse_position.x;
    int y = mouse_position.y;
    int temp = 0;

    if (x <= 266 && x >= 137 && y <= 417 && y >= 375) {
        temp = 1;
        settings->menu_home->element_selected = 0;
    }
    if (x <= 319 && x >= 88 && y <= 520 && y >= 476) {
        temp = 1;
        settings->menu_home->element_selected = 1;
    }
    if (x <= 254 && x >= 150 && y <= 620 && y >= 576) {
        temp = 1;
        settings->menu_home->element_selected = 2;
    }
    if (temp == 0)
        settings->menu_home->element_selected = -1;
}
