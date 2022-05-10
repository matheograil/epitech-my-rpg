/*
** EPITECH PROJECT, 2022
** MENU_SETTINGS_BTN.C
** File description:
** MENU_SETTINGS_BTN.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void menu_settings_btn(settings_t *settings)
{
    if (settings->menu_settings->element_selected == -1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_less, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_sound_more, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_60_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_120_fps, NULL);
        sfRenderWindow_drawSprite(settings->window,
            settings->menu_settings->sp_back, NULL);
    }
    menu_settings_btn_pressed_sound_less(settings);
    menu_settings_btn_pressed_sound_more(settings);
    menu_settings_btn_pressed_60_fps(settings);
    menu_settings_btn_pressed_120_fps(settings);
    menu_settings_btn_pressed_back(settings);
}
