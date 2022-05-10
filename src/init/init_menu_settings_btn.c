/*
** EPITECH PROJECT, 2022
** INIT_MENU_SETTINGS_BTN.C
** File description:
** INIT_MENU_SETTINGS_BTN.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void init_menu_settings_btn_sound_less(menu_settings_t *menu_settings)
{
    sfVector2f position = { 650, 385 };

    menu_settings->sp_sound_less = sfSprite_create();
    menu_settings->tx_sound_less = sfTexture_createFromFile("./res/"
        "menu_settings/btn/sound_less.png", NULL);
    sfSprite_setTexture(menu_settings->sp_sound_less,
        menu_settings->tx_sound_less, sfTrue);
    sfSprite_setPosition(menu_settings->sp_sound_less, position);
    menu_settings->sp_sound_less_pressed = sfSprite_create();
    menu_settings->tx_sound_less_pressed = sfTexture_createFromFile("./res"
        "/menu_settings/btn/sound_less_pressed.png", NULL);
    sfSprite_setTexture(menu_settings->sp_sound_less_pressed,
        menu_settings->tx_sound_less_pressed, sfTrue);
    sfSprite_setPosition(menu_settings->sp_sound_less_pressed, position);
}

void init_menu_settings_btn_sound_more(menu_settings_t *menu_settings)
{
    sfVector2f position = { 1150, 385 };

    menu_settings->sp_sound_more = sfSprite_create();
    menu_settings->tx_sound_more = sfTexture_createFromFile("./res/"
        "menu_settings/btn/sound_more.png", NULL);
    sfSprite_setTexture(menu_settings->sp_sound_more,
        menu_settings->tx_sound_more, sfTrue);
    sfSprite_setPosition(menu_settings->sp_sound_more, position);
    menu_settings->sp_sound_more_pressed = sfSprite_create();
    menu_settings->tx_sound_more_pressed = sfTexture_createFromFile("./res"
        "/menu_settings/btn/sound_more_pressed.png", NULL);
    sfSprite_setTexture(menu_settings->sp_sound_more_pressed,
        menu_settings->tx_sound_more_pressed, sfTrue);
    sfSprite_setPosition(menu_settings->sp_sound_more_pressed, position);
}

void init_menu_settings_btn_60_fps(menu_settings_t *menu_settings)
{
    sfVector2f position = { 525, 535 };

    menu_settings->sp_60_fps = sfSprite_create();
    menu_settings->tx_60_fps =
        sfTexture_createFromFile("./res/menu_settings/btn/fps_60.png", NULL);
    sfSprite_setTexture(menu_settings->sp_60_fps, menu_settings->tx_60_fps,
        sfTrue);
    sfSprite_setPosition(menu_settings->sp_60_fps, position);
    menu_settings->sp_60_fps_pressed = sfSprite_create();
    menu_settings->tx_60_fps_pressed = sfTexture_createFromFile("./res/"
        "menu_settings/btn/fps_60_pressed.png", NULL);
    sfSprite_setTexture(menu_settings->sp_60_fps_pressed,
        menu_settings->tx_60_fps_pressed, sfTrue);
    sfSprite_setPosition(menu_settings->sp_60_fps_pressed, position);
}

void init_menu_settings_btn_120_fps(menu_settings_t *menu_settings)
{
    sfVector2f position = { 1025, 535 };

    menu_settings->sp_120_fps = sfSprite_create();
    menu_settings->tx_120_fps =
        sfTexture_createFromFile("./res/menu_settings/btn/fps_120.png", NULL);
    sfSprite_setTexture(menu_settings->sp_120_fps, menu_settings->tx_120_fps,
        sfTrue);
    sfSprite_setPosition(menu_settings->sp_120_fps, position);
    menu_settings->sp_120_fps_pressed = sfSprite_create();
    menu_settings->tx_120_fps_pressed = sfTexture_createFromFile("./res/"
        "menu_settings/btn/fps_120_pressed.png", NULL);
    sfSprite_setTexture(menu_settings->sp_120_fps_pressed,
        menu_settings->tx_120_fps_pressed, sfTrue);
    sfSprite_setPosition(menu_settings->sp_120_fps_pressed, position);
}

void init_menu_settings_btn_back(menu_settings_t *menu_settings)
{
    sfVector2f position = { 790, 665 };

    menu_settings->sp_back = sfSprite_create();
    menu_settings->tx_back =
        sfTexture_createFromFile("./res/menu_settings/btn/back.png", NULL);
    sfSprite_setTexture(menu_settings->sp_back, menu_settings->tx_back, sfTrue);
    sfSprite_setPosition(menu_settings->sp_back, position);
    menu_settings->sp_back_pressed = sfSprite_create();
    menu_settings->tx_back_pressed = sfTexture_createFromFile("./res"
        "/menu_settings/btn/back_pressed.png", NULL);
    sfSprite_setTexture(menu_settings->sp_back_pressed,
        menu_settings->tx_back_pressed, sfTrue);
    sfSprite_setPosition(menu_settings->sp_back_pressed, position);
}
