/*
** EPITECH PROJECT, 2022
** INIT_GAME_SETTINGS.C
** File description:
** INIT_GAME_SETTINGS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void init_game_settings_resume(game_settings_t *game_settings)
{
    sfVector2f position = { 100, 200 };

    game_settings->sp_resume = sfSprite_create();
    game_settings->tx_resume =
        sfTexture_createFromFile("./res/game_settings/btn/resume.png", NULL);
    sfSprite_setTexture(game_settings->sp_resume, game_settings->tx_resume,
        sfTrue);
    sfSprite_setPosition(game_settings->sp_resume, position);
    game_settings->sp_resume_pressed = sfSprite_create();
    game_settings->tx_resume_pressed = sfTexture_createFromFile("./res/"
        "game_settings/btn/resume_pressed.png", NULL);
    sfSprite_setTexture(game_settings->sp_resume_pressed,
        game_settings->tx_resume_pressed, sfTrue);
    sfSprite_setPosition(game_settings->sp_resume_pressed, position);
}

void init_game_settings_back(game_settings_t *game_settings)
{
    sfVector2f position = { 100, 300 };

    game_settings->sp_back = sfSprite_create();
    game_settings->tx_back =
        sfTexture_createFromFile("./res/game_settings/btn/back.png", NULL);
    sfSprite_setTexture(game_settings->sp_back, game_settings->tx_back, sfTrue);
    sfSprite_setPosition(game_settings->sp_back, position);
    game_settings->sp_back_pressed = sfSprite_create();
    game_settings->tx_back_pressed = sfTexture_createFromFile("./res/"
        "game_settings/btn/back_pressed.png", NULL);
    sfSprite_setTexture(game_settings->sp_back_pressed,
        game_settings->tx_back_pressed, sfTrue);
    sfSprite_setPosition(game_settings->sp_back_pressed, position);
}

void init_game_settings_exit(game_settings_t *game_settings)
{
    sfVector2f position = { 100, 400 };

    game_settings->sp_exit = sfSprite_create();
    game_settings->tx_exit =
        sfTexture_createFromFile("./res/game_settings/btn/exit.png", NULL);
    sfSprite_setTexture(game_settings->sp_exit, game_settings->tx_exit, sfTrue);
    sfSprite_setPosition(game_settings->sp_exit, position);
    game_settings->sp_exit_pressed = sfSprite_create();
    game_settings->tx_exit_pressed = sfTexture_createFromFile("./res/"
        "game_settings/btn/exit_pressed.png", NULL);
    sfSprite_setTexture(game_settings->sp_exit_pressed,
        game_settings->tx_exit_pressed, sfTrue);
    sfSprite_setPosition(game_settings->sp_exit_pressed, position);
}

game_settings_t *init_game_settings(void)
{
    static game_settings_t game_settings;

    game_settings.element_selected = -1;
    game_settings.sp_background = sfSprite_create();
    game_settings.tx_background =
        sfTexture_createFromFile("./res/game_settings/background.png", NULL);
    sfSprite_setTexture(game_settings.sp_background,
        game_settings.tx_background, sfTrue);
    init_game_settings_resume(&game_settings);
    init_game_settings_back(&game_settings);
    init_game_settings_exit(&game_settings);
    return (&game_settings);
}
