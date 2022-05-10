/*
** EPITECH PROJECT, 2022
** GAME_CHAT_ACTIONS.C
** File description:
** GAME_CHAT_ACTIONS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_chat_actions(settings_t *settings)
{
    if (settings->game_chat->last_update + 200000 < settings->time
        && sfKeyboard_isKeyPressed(sfKeyEnter) == sfTrue
        && settings->game_chat->status != -1) {
        if (settings->game_chat->status >= my_strlen(settings->game_chat->text)
            / 55) {
            free(settings->game_chat->text);
            settings->game_chat->status = -1;
        } else {
            settings->game_chat->status++;
        }
        sfSound_play(settings->sound_click);
        settings->game_chat->last_update = settings->time;
    }
}
