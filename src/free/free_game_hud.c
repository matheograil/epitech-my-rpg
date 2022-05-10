/*
** EPITECH PROJECT, 2022
** FREE_GAME_HUD.C
** File description:
** FREE_GAME_HUD.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void free_game_hud(game_hud_t *game_hud)
{
    sfSprite_destroy(game_hud->sp_heart_one);
    sfSprite_destroy(game_hud->sp_heart_two);
    sfSprite_destroy(game_hud->sp_heart_three);
    sfTexture_destroy(game_hud->tx_heart);
    sfSprite_destroy(game_hud->sp_exp);
    sfTexture_destroy(game_hud->tx_exp);
    sfText_destroy(game_hud->exp_text);
}
