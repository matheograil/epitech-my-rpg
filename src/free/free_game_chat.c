/*
** EPITECH PROJECT, 2022
** FREE_GAME_CHAT.C
** File description:
** FREE_GAME_CHAT.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void free_game_chat(game_chat_t *game_chat)
{
    if (game_chat->status != -1) {
        free(game_chat->text);
    }
    sfSprite_destroy(game_chat->sp_box);
    sfTexture_destroy(game_chat->tx_box);
    sfText_destroy(game_chat->box_text);
}
