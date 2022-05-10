/*
** EPITECH PROJECT, 2022
** MENU_SETTINGS_BACKGROUND.C
** File description:
** MENU_SETTINGS_BACKGROUND.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_settings_background(settings_t *settings)
{
    sfRenderWindow_drawSprite(settings->window,
        settings->menu_settings->sp_background, NULL);
}
