/*
** EPITECH PROJECT, 2022
** MENU_HOME_BACKGROUND.C
** File description:
** MENU_HOME_BACKGROUND.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_home_background(settings_t *settings)
{
    sfRenderWindow_drawSprite(settings->window,
        settings->menu_home->sp_background, NULL);
}
