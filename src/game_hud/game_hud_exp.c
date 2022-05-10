/*
** EPITECH PROJECT, 2022
** GAME_HUD_EXP.C
** File description:
** GAME_HUD_EXP.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_hud_exp(settings_t *settings)
{
    char *exp = my_itoa(settings->exp);

    sfRenderWindow_drawSprite(settings->window, settings->game_hud->sp_exp,
        NULL);
    sfText_setString(settings->game_hud->exp_text, exp);
    sfRenderWindow_drawText(settings->window, settings->game_hud->exp_text,
        NULL);
    free(exp);
}
