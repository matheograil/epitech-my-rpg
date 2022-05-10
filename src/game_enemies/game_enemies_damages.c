/*
** EPITECH PROJECT, 2022
** GAME_ENEMIES_DAMAGES.C
** File description:
** GAME_ENEMIES_DAMAGES.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_enemies_damages(settings_t *settings, game_enemies_t *current)
{
    if (settings->last_attack + 1000000 < settings->time
        && sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
        sfSound_play(settings->sound_attack);
        current->life -= settings->damages;
        settings->last_attack = settings->time;
    }
    if (current->last_attack + 2000000 < settings->time) {
        sfSound_play(settings->sound_pain);
        settings->life--;
        current->last_attack = settings->time;
    }
}
