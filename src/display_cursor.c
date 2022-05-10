/*
** EPITECH PROJECT, 2022
** DISPLAY_CURSOR.C
** File description:
** DISPLAY_CURSOR.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void display_cursor(settings_t *settings)
{
    int x = sfMouse_getPositionRenderWindow(settings->window).x;
    int y = sfMouse_getPositionRenderWindow(settings->window).y;
    sfVector2f vector = { x, y };

    sfRenderWindow_setMouseCursorVisible(settings->window, sfFalse);
    sfSprite_setPosition(settings->sp_cursor, vector);
    sfRenderWindow_drawSprite(settings->window, settings->sp_cursor, NULL);
}
