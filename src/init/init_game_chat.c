/*
** EPITECH PROJECT, 2022
** INIT_GAME_CHAT.C
** File description:
** INIT_GAME_CHAT.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

game_chat_t *init_game_chat(settings_t *settings)
{
    static game_chat_t game_chat;
    sfVector2f box_position = { 210, 750 };
    sfVector2f text_position = { 300, 830 };

    game_chat.status = -1;
    game_chat.last_update = 0;
    game_chat.sp_box = sfSprite_create();
    game_chat.tx_box = sfTexture_createFromFile("./res/game_chat/box.png",
        NULL);
    sfSprite_setTexture(game_chat.sp_box, game_chat.tx_box, sfTrue);
    sfSprite_setPosition(game_chat.sp_box, box_position);
    game_chat.box_text = sfText_create();
    sfText_setFont(game_chat.box_text, settings->font);
    sfText_setCharacterSize(game_chat.box_text, 50);
    sfText_setColor(game_chat.box_text, sfBlack);
    sfText_setPosition(game_chat.box_text, text_position);
    return (&game_chat);
}
