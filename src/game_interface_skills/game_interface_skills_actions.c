/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_SKILLS_ACTIONS_KEYS.C
** File description:
** GAME_INTERFACE_SKILLS_ACTIONS_KEYS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_skills_actions_keys(settings_t *settings)
{
    if (settings->game_interface->skills == 1
        && sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue) {
        settings->game_interface->skills = 0;
    }
}

void game_interface_skills_actions_buttons(settings_t *settings,
    sfMouseButtonEvent event)
{
    int x = event.x;
    int y = event.y;

    if (x <= 1096 && x >= 924 && y <= 562 && y >= 536
        && settings->exp - 100 >= 0) {
        sfSound_play(settings->sound_click);
        settings->exp -= 100;
        settings->skills_damages += 20;
    }
}
