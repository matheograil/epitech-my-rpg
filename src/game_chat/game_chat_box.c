/*
** EPITECH PROJECT, 2022
** GAME_CHAT_BOX.C
** File description:
** GAME_CHAT_BOX.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

int game_chat_box_end(settings_t *settings)
{
    int text_len = my_strlen(settings->game_chat->text);

    if (text_len - 55 * settings->game_chat->status >= 0) {
        return (55 + 55 * settings->game_chat->status);
    } else {
        return ((text_len - 55 * settings->game_chat->status) * -1);
    }
}

char *game_chat_box_text(char *text, int start, int end)
{
    char *res = malloc(sizeof(char) * (end - start + 1));

    for (int i = 0, j = start; text[j] != '\0' && j < end; i++, j++) {
        res[i] = text[j];
        if (text[j + 1] == '\0' || j + 1 >= end) {
            res[i + 1] = '\0';
        }
    }
    return (res);
}

void game_chat_box(settings_t *settings)
{
    char *text;

    if (settings->game_chat->status != -1) {
        sfRenderWindow_drawSprite(settings->window, settings->game_chat->sp_box,
            NULL);
        text = game_chat_box_text(settings->game_chat->text, 55
            * settings->game_chat->status, game_chat_box_end(settings));
        sfText_setString(settings->game_chat->box_text, text);
        sfRenderWindow_drawText(settings->window, settings->game_chat->box_text,
            NULL);
        free(text);
    }
}
