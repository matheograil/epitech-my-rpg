/*
** EPITECH PROJECT, 2022
** FREE_MENU_SETTINGS.C
** File description:
** FREE_MENU_SETTINGS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void free_menu_settings_btn(menu_settings_t *menu_settings)
{
    sfSprite_destroy(menu_settings->sp_sound_less);
    sfTexture_destroy(menu_settings->tx_sound_less);
    sfSprite_destroy(menu_settings->sp_sound_less_pressed);
    sfTexture_destroy(menu_settings->tx_sound_less_pressed);
    sfSprite_destroy(menu_settings->sp_sound_more);
    sfTexture_destroy(menu_settings->tx_sound_more);
    sfSprite_destroy(menu_settings->sp_sound_more_pressed);
    sfTexture_destroy(menu_settings->tx_sound_more_pressed);
    sfSprite_destroy(menu_settings->sp_60_fps);
    sfTexture_destroy(menu_settings->tx_60_fps);
    sfSprite_destroy(menu_settings->sp_60_fps_pressed);
    sfTexture_destroy(menu_settings->tx_60_fps_pressed);
    sfSprite_destroy(menu_settings->sp_120_fps);
    sfTexture_destroy(menu_settings->tx_120_fps);
    sfSprite_destroy(menu_settings->sp_120_fps_pressed);
    sfTexture_destroy(menu_settings->tx_120_fps_pressed);
    sfSprite_destroy(menu_settings->sp_back);
    sfTexture_destroy(menu_settings->tx_back);
    sfSprite_destroy(menu_settings->sp_back_pressed);
    sfTexture_destroy(menu_settings->tx_back_pressed);
}

void free_menu_settings(menu_settings_t *menu_settings)
{
    sfSprite_destroy(menu_settings->sp_background);
    sfTexture_destroy(menu_settings->tx_background);
    sfSprite_destroy(menu_settings->sp_board);
    sfTexture_destroy(menu_settings->tx_board);
    free_menu_settings_btn(menu_settings);
}
