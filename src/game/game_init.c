/*
** EPITECH PROJECT, 2022
** GAME_INIT.C
** File description:
** GAME_INIT.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_init(settings_t *settings)
{
    game_chat_add(settings, get_str("./res/game_chat/chats/start.txt"));
    game_interface_inventory_add(settings->game_interface_inventory, 0.6,
        "apple");
}
