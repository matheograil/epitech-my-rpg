/*
** EPITECH PROJECT, 2022
** INIT_MENU_SETTINGS.C
** File description:
** INIT_MENU_SETTINGS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void init_menu_settings_board(menu_settings_t *menu_settings)
{
    sfVector2f position = { 480, 195 };

    menu_settings->sp_board = sfSprite_create();
    menu_settings->tx_board =
        sfTexture_createFromFile("./res/menu_settings/board.png", NULL);
    sfSprite_setTexture(menu_settings->sp_board, menu_settings->tx_board,
        sfTrue);
    sfSprite_setPosition(menu_settings->sp_board, position);
}

menu_settings_t *init_menu_settings(void)
{
    static menu_settings_t menu_settings;

    menu_settings.element_selected = -1;
    menu_settings.sp_background = sfSprite_create();
    menu_settings.tx_background =
        sfTexture_createFromFile("./res/menu_settings/background.png", NULL);
    sfSprite_setTexture(menu_settings.sp_background,
        menu_settings.tx_background, sfTrue);
    init_menu_settings_board(&menu_settings);
    init_menu_settings_btn_sound_less(&menu_settings);
    init_menu_settings_btn_sound_more(&menu_settings);
    init_menu_settings_btn_60_fps(&menu_settings);
    init_menu_settings_btn_120_fps(&menu_settings);
    init_menu_settings_btn_back(&menu_settings);
    return (&menu_settings);
}
