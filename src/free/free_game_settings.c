/*
** EPITECH PROJECT, 2022
** FREE_GAME_SETTINGS.C
** File description:
** FREE_GAME_SETTINGS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void free_game_settings_btn(game_settings_t *game_settings)
{
    sfSprite_destroy(game_settings->sp_resume);
    sfTexture_destroy(game_settings->tx_resume);
    sfSprite_destroy(game_settings->sp_resume_pressed);
    sfTexture_destroy(game_settings->tx_resume_pressed);
    sfSprite_destroy(game_settings->sp_back);
    sfTexture_destroy(game_settings->tx_back);
    sfSprite_destroy(game_settings->sp_back_pressed);
    sfTexture_destroy(game_settings->tx_back_pressed);
    sfSprite_destroy(game_settings->sp_exit);
    sfTexture_destroy(game_settings->tx_exit);
    sfSprite_destroy(game_settings->sp_exit_pressed);
    sfTexture_destroy(game_settings->tx_exit_pressed);
}

void free_game_settings(game_settings_t *game_settings)
{
    sfSprite_destroy(game_settings->sp_background);
    sfTexture_destroy(game_settings->tx_background);
    free_game_settings_btn(game_settings);
}
