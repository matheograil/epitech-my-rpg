/*
** EPITECH PROJECT, 2022
** INIT_GAME_HUD.C
** File description:
** INIT_GAME_HUD.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void init_game_hud_hearts(game_hud_t *game_hud)
{
    sfVector2f one_position = { 30, 30 };
    sfVector2f two_position = { 130, 30 };
    sfVector2f three_position = { 230, 30 };

    game_hud->sp_heart_one = sfSprite_create();
    game_hud->sp_heart_two = sfSprite_create();
    game_hud->sp_heart_three = sfSprite_create();
    game_hud->tx_heart = sfTexture_createFromFile("./res/game_hud/heart.png",
        NULL);
    sfSprite_setTexture(game_hud->sp_heart_one, game_hud->tx_heart, sfTrue);
    sfSprite_setTexture(game_hud->sp_heart_two, game_hud->tx_heart, sfTrue);
    sfSprite_setTexture(game_hud->sp_heart_three, game_hud->tx_heart, sfTrue);
    sfSprite_setPosition(game_hud->sp_heart_one, one_position);
    sfSprite_setPosition(game_hud->sp_heart_two, two_position);
    sfSprite_setPosition(game_hud->sp_heart_three, three_position);
}

void init_game_hud_exp(game_hud_t *game_hud, settings_t *settings)
{
    sfVector2f exp_scale = { 0.3, 0.3 };
    sfVector2f exp_position = { 1570, 30 };
    sfVector2f exp_text_position = { 1600, 60 };

    game_hud->sp_exp = sfSprite_create();
    game_hud->tx_exp = sfTexture_createFromFile("./res/game_hud/exp.png", NULL);
    sfSprite_setTexture(game_hud->sp_exp, game_hud->tx_exp, sfTrue);
    sfSprite_setScale(game_hud->sp_exp, exp_scale);
    sfSprite_setPosition(game_hud->sp_exp, exp_position);
    game_hud->exp_text = sfText_create();
    sfText_setFont(game_hud->exp_text, settings->font);
    sfText_setCharacterSize(game_hud->exp_text, 50);
    sfText_setPosition(game_hud->exp_text, exp_text_position);
}

game_hud_t *init_game_hud(settings_t *settings)
{
    static game_hud_t game_hud;

    init_game_hud_hearts(&game_hud);
    init_game_hud_exp(&game_hud, settings);
    return (&game_hud);
}
