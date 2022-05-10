/*
** EPITECH PROJECT, 2022
** GAME_ENEMIES_ADD.C
** File description:
** GAME_ENEMIES_ADD.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_enemies_add_texture(game_enemies_t *current, char *type)
{
    if (my_strcmp(type, "goblin") == 0) {
        current->next->texture =
            sfTexture_createFromFile("./res/game_enemies/goblin.png", NULL);
    }
    if (my_strcmp(type, "skeleton") == 0) {
        current->next->texture =
            sfTexture_createFromFile("./res/game_enemies/skeleton.png", NULL);
    }
}

void game_enemies_add_one(game_enemies_t *head,
    game_enemies_add_t *game_enemies_add)
{
    game_enemies_t *current = head;

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = malloc(sizeof(game_enemies_t));
    current->next->life = 100;
    current->next->x = game_enemies_add->x;
    current->next->y = game_enemies_add->y;
    current->next->start = game_enemies_add->start;
    current->next->left = game_enemies_add->left;
    current->next->max_left = game_enemies_add->max_left;
    current->next->width = game_enemies_add->width;
    current->next->height = game_enemies_add->height;
    current->next->first_element = 0;
    current->next->last_update = 0;
    current->next->last_attack = 0;
    game_enemies_add_texture(current, game_enemies_add->type);
    game_enemies_add_two(current, game_enemies_add);
}

void game_enemies_add_two(game_enemies_t *current,
    game_enemies_add_t *game_enemies_add)
{
    sfVector2f scale = { game_enemies_add->scale, game_enemies_add->scale };

    current->next->sprite = sfSprite_create();
    sfSprite_setTexture(current->next->sprite, current->next->texture, sfTrue);
    sfSprite_setScale(current->next->sprite, scale);
    current->next->next = NULL;
}
