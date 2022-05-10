/*
** EPITECH PROJECT, 2022
** GAME_CHAT_SELECTOR.C
** File description:
** GAME_CHAT_SELECTOR.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_chat_selector(game_characters_t *current, settings_t *settings)
{
    if (current->chat == 1) {
        return;
    }
    if (my_strcmp(current->type, "guardian") == 0) {
        game_chat_add(settings, get_str("./res/game_chat/chats/quest.txt"));
        game_interface_inventory_add(settings->game_interface_inventory, 0.6,
            "sword");
        game_enemies_spawn(settings);
        settings->quest_started = 1;
        current->chat = 1;
    }
    if (my_strcmp(current->type, "witch_villager") == 0) {
        game_chat_add(settings, get_str("./res/game_chat/chats/"
            "life_potion.txt"));
        game_interface_inventory_add(settings->game_interface_inventory, 0.6,
            "life_potion");
        current->chat = 1;
    }
}
