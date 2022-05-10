/*
** EPITECH PROJECT, 2022
** GAME_CHARACTERS_ADD.C
** File description:
** GAME_CHARACTERS_ADD.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_characters_add_texture_one(game_characters_t *current, char *type)
{
    if (my_strcmp(type, "player") == 0) {
        current->next->texture =
            sfTexture_createFromFile("./res/game_characters/player.png", NULL);
        current->next->player = 1;
    }
    if (my_strcmp(type, "believing_witch") == 0) {
        current->next->texture = sfTexture_createFromFile("./res/"
            "game_characters/npc/believing_witch.png", NULL);
    }
    if (my_strcmp(type, "guardian") == 0) {
        current->next->texture = sfTexture_createFromFile("./res/"
            "game_characters/npc/guardian.png", NULL);
    }
    if (my_strcmp(type, "old_man") == 0) {
        current->next->texture = sfTexture_createFromFile("./res/"
            "game_characters/npc/old_man.png", NULL);
    }
    game_characters_add_texture_two(current, type);
}

void game_characters_add_texture_two(game_characters_t *current, char *type)
{
    if (my_strcmp(type, "witch_villager") == 0) {
        current->next->texture = sfTexture_createFromFile("./res/"
            "game_characters/npc/witch_villager.png", NULL);
    }
}

void game_characters_add(game_characters_t *head, int *position,
    int scale_value, char *type)
{
    game_characters_t *current = head;
    sfVector2f scale = { scale_value, scale_value };

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = malloc(sizeof(game_characters_t));
    current->next->type = type;
    current->next->x = position[0];
    current->next->y = position[1];
    current->next->status = 2;
    current->next->player = 0;
    current->next->chat = 0;
    current->next->first_element = 0;
    current->next->last_update = 0;
    current->next->sprite = sfSprite_create();
    game_characters_add_texture_one(current, type);
    sfSprite_setTexture(current->next->sprite, current->next->texture, sfTrue);
    sfSprite_setScale(current->next->sprite, scale);
    current->next->next = NULL;
}
