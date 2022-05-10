/*
** EPITECH PROJECT, 2022
** MENU_SETTINGS_BTN_PRESSED.C
** File description:
** MENU_SETTINGS_BTN_PRESSED.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_settings_btn_pressed_sound_less(settings_t *settings)
{
    if (settings->menu_settings->element_selected == 0) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_less_pressed, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_more, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_60_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_120_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_back, NULL);
    }
}

void menu_settings_btn_pressed_sound_more(settings_t *settings)
{
    if (settings->menu_settings->element_selected == 1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_less, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_more_pressed, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_60_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_120_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_back, NULL);
    }
}

void menu_settings_btn_pressed_60_fps(settings_t *settings)
{
    if (settings->menu_settings->element_selected == 2) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_less, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_more, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_60_fps_pressed, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_120_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_back, NULL);
    }
}

void menu_settings_btn_pressed_120_fps(settings_t *settings)
{
    if (settings->menu_settings->element_selected == 3) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_less, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_more, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_60_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_120_fps_pressed, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_back, NULL);
    }
}

void menu_settings_btn_pressed_back(settings_t *settings)
{
    if (settings->menu_settings->element_selected == 4) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_less, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_more, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_60_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_120_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_back_pressed, NULL);
    }
}
