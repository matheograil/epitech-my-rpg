/*
** EPITECH PROJECT, 2022
** INIT_MENU_HOME.C
** File description:
** INIT_MENU_HOME.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void init_menu_home_play(menu_home_t *menu_home)
{
    sfVector2f position = { 5, 350 };

    menu_home->sp_play = sfSprite_create();
    menu_home->tx_play =
        sfTexture_createFromFile("./res/menu_home/btn/play.png", NULL);
    sfSprite_setTexture(menu_home->sp_play, menu_home->tx_play, sfTrue);
    sfSprite_setPosition(menu_home->sp_play, position);
    menu_home->sp_play_pressed = sfSprite_create();
    menu_home->tx_play_pressed =
        sfTexture_createFromFile("./res/menu_home/btn/play_pressed.png", NULL);
    sfSprite_setTexture(menu_home->sp_play_pressed, menu_home->tx_play_pressed,
        sfTrue);
    sfSprite_setPosition(menu_home->sp_play_pressed, position);
}

void init_menu_home_settings(menu_home_t *menu_home)
{
    sfVector2f position = { 5, 450 };

    menu_home->sp_settings = sfSprite_create();
    menu_home->tx_settings =
        sfTexture_createFromFile("./res/menu_home/btn/settings.png", NULL);
    sfSprite_setTexture(menu_home->sp_settings, menu_home->tx_settings, sfTrue);
    sfSprite_setPosition(menu_home->sp_settings, position);
    menu_home->sp_settings_pressed = sfSprite_create();
    menu_home->tx_settings_pressed = sfTexture_createFromFile("./res/"
        "menu_home/btn/settings_pressed.png", NULL);
    sfSprite_setTexture(menu_home->sp_settings_pressed,
        menu_home->tx_settings_pressed, sfTrue);
    sfSprite_setPosition(menu_home->sp_settings_pressed, position);
}

void init_menu_home_exit(menu_home_t *menu_home)
{
    sfVector2f position = { 5, 550 };

    menu_home->sp_exit = sfSprite_create();
    menu_home->tx_exit =
        sfTexture_createFromFile("./res/menu_home/btn/exit.png", NULL);
    sfSprite_setTexture(menu_home->sp_exit, menu_home->tx_exit, sfTrue);
    sfSprite_setPosition(menu_home->sp_exit, position);
    menu_home->sp_exit_pressed = sfSprite_create();
    menu_home->tx_exit_pressed =
        sfTexture_createFromFile("./res/menu_home/btn/exit_pressed.png", NULL);
    sfSprite_setTexture(menu_home->sp_exit_pressed, menu_home->tx_exit_pressed,
        sfTrue);
    sfSprite_setPosition(menu_home->sp_exit_pressed, position);
}

menu_home_t *init_menu_home(void)
{
    static menu_home_t menu_home;
    sfVector2f logo_position = { 565, 100 };

    menu_home.element_selected = -1;
    menu_home.sp_background = sfSprite_create();
    menu_home.tx_background =
        sfTexture_createFromFile("./res/menu_home/background.jpg", NULL);
    sfSprite_setTexture(menu_home.sp_background, menu_home.tx_background,
        sfTrue);
    menu_home.sp_logo = sfSprite_create();
    menu_home.tx_logo =
        sfTexture_createFromFile("./res/menu_home/logo.png", NULL);
    sfSprite_setTexture(menu_home.sp_logo, menu_home.tx_logo, sfTrue);
    sfSprite_setPosition(menu_home.sp_logo, logo_position);
    init_menu_home_play(&menu_home);
    init_menu_home_settings(&menu_home);
    init_menu_home_exit(&menu_home);
    return (&menu_home);
}
