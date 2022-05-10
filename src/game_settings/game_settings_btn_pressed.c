/*
** EPITECH PROJECT, 2022
** GAME_SETTINGS_BTN_PRESSED.C
** File description:
** GAME_SETTINGS_BTN_PRESSED.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_settings_btn_pressed_resume(settings_t *settings)
{
    if (settings->game_settings->element_selected == 0) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_resume_pressed, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_back, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_exit, NULL);
    }
}

void game_settings_btn_pressed_back(settings_t *settings)
{
    if (settings->game_settings->element_selected == 1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_resume, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_back_pressed, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_exit, NULL);
    }
}

void game_settings_btn_pressed_exit(settings_t *settings)
{
    if (settings->game_settings->element_selected == 2) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_resume, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_back, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->game_settings->sp_exit_pressed, NULL);
    }
}
