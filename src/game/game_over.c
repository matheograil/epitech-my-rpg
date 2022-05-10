/*
** EPITECH PROJECT, 2022
** GAME_OVER.C
** File description:
** GAME_OVER.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_over(settings_t *settings)
{
    if (settings->quest_started == 1) {
        if (settings->life <= 0) {
            game_chat_add(settings, get_str("./res/game_chat/chats/"
                "end_lose.txt"));
            settings->quest_started = 0;
        }
        if (game_enemies_count(settings->game_enemies) == 1) {
            game_chat_add(settings, get_str("./res/game_chat/chats/"
                "end_win.txt"));
            settings->life = 0;
            settings->quest_started = 0;
        }
    } else if (settings->quest_started == 0) {
        if (settings->life <= 0 && settings->game_chat->status == -1) {
            game_reset(settings);
            settings->status = "menu_home";
        }
    }
}
