/*
** EPITECH PROJECT, 2022
** FREE_MENU_HOME.C
** File description:
** FREE_MENU_HOME.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void free_menu_home_btn(menu_home_t *menu_home)
{
    sfSprite_destroy(menu_home->sp_play);
    sfTexture_destroy(menu_home->tx_play);
    sfSprite_destroy(menu_home->sp_play_pressed);
    sfTexture_destroy(menu_home->tx_play_pressed);
    sfSprite_destroy(menu_home->sp_settings);
    sfTexture_destroy(menu_home->tx_settings);
    sfSprite_destroy(menu_home->sp_settings_pressed);
    sfTexture_destroy(menu_home->tx_settings_pressed);
    sfSprite_destroy(menu_home->sp_exit);
    sfTexture_destroy(menu_home->tx_exit);
    sfSprite_destroy(menu_home->sp_exit_pressed);
    sfTexture_destroy(menu_home->tx_exit_pressed);
}

void free_menu_home(menu_home_t *menu_home)
{
    sfSprite_destroy(menu_home->sp_background);
    sfTexture_destroy(menu_home->tx_background);
    sfSprite_destroy(menu_home->sp_logo);
    sfTexture_destroy(menu_home->tx_logo);
    free_menu_home_btn(menu_home);
}
