/*
** EPITECH PROJECT, 2022
** GAME_CHAT_ADD.C
** File description:
** GAME_CHAT_ADD.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_chat_add(settings_t *settings, char *text)
{
    if (settings->game_chat->status == -1) {
        settings->game_chat->text = text;
        settings->game_chat->status = 0;
    }
}
