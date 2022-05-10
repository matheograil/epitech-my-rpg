/*
** EPITECH PROJECT, 2022
** GAME_SETTINGS_BTN.C
** File description:
** GAME_SETTINGS_BTN.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_settings_btn(settings_t *settings)
{
    if (settings->game_settings->element_selected == -1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_resume, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_back, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_exit, NULL);
    }
    game_settings_btn_pressed_resume(settings);
    game_settings_btn_pressed_back(settings);
    game_settings_btn_pressed_exit(settings);
}
