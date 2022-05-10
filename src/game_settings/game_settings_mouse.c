/*
** EPITECH PROJECT, 2022
** GAME_SETTINGS_MOUSE.C
** File description:
** GAME_SETTINGS_MOUSE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_settings_mouse(settings_t *settings)
{
    sfVector2i mouse_position =
        sfMouse_getPosition((sfWindow *)settings->window);
    int x = mouse_position.x;
    int y = mouse_position.y;
    int temp = 0;

    if (x <= 494 && x >= 300 && y <= 269 && y >= 232) {
        temp = 1;
        settings->game_settings->element_selected = 0;
    }
    if (x <= 588 && x >= 210 && y <= 369 && y >= 323) {
        temp = 1;
        settings->game_settings->element_selected = 1;
    }
    if (x <= 536 && x >= 258 && y <= 466 && y >= 430) {
        temp = 1;
        settings->game_settings->element_selected = 2;
    }
    if (temp == 0)
        settings->game_settings->element_selected = -1;
}
