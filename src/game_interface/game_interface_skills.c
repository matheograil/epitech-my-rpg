/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_SKILLS.C
** File description:
** GAME_INTERFACE_SKILLS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_skills(settings_t *settings)
{
    if (settings->game_interface->skills == 1) {
        sfRenderWindow_drawSprite(settings->window,
            settings->game_interface->sp_skills, NULL);
    }
}
