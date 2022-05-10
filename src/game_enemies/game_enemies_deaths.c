/*
** EPITECH PROJECT, 2022
** GAME_ENEMIES_DEATHS.C
** File description:
** GAME_ENEMIES_DEATHS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_enemies_deaths(settings_t *settings)
{
    game_enemies_t *current = settings->game_enemies;

    for (int i = 0; current != NULL; i++, current = current->next) {
        if (current->first_element == 0 && current->life <= 0) {
            settings->exp += 100;
            game_enemies_delete(&settings->game_enemies, i);
            break;
        }
    }
}
