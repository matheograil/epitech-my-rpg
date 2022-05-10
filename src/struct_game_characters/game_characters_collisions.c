/*
** EPITECH PROJECT, 2022
** GAME_CHARACTERS_COLLISIONS.C
** File description:
** GAME_CHARACTERS_COLLISIONS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

game_collisions_t *game_characters_collisions_init(settings_t *settings,
    int direction)
{
    static game_collisions_t c;

    c.player_ul_x = settings->game_map->x;
    c.player_ul_y = settings->game_map->y;
    c.player_ur_x = c.player_ul_x - 65;
    c.player_ur_y = c.player_ul_y;
    c.player_lr_x = c.player_ul_x - 65;
    c.player_lr_y = c.player_ul_y - 65;
    c.player_ll_x = c.player_ul_x;
    c.player_ll_y = c.player_ul_y - 65;
    (direction == 0) ? (c.player_ul_y += 10, c.player_ur_y += 10) : (0);
    (direction == 1) ? (c.player_ur_x -= 10, c.player_lr_x -= 10) : (0);
    (direction == 2) ? (c.player_lr_y -= 10, c.player_ll_y -= 10) : (0);
    (direction == 3) ? (c.player_ul_x += 10, c.player_ll_x += 10) : (0);
    return (&c);
}

int game_characters_collisions_inside(game_collisions_t *c)
{
    if (c->player_ul_x <= c->object_ul_x && c->player_ul_x >= c->object_ur_x
        && c->player_ul_y <= c->object_ul_y && c->player_ul_y >= c->object_ll_y)
        return (1);
    if (c->player_ur_x <= c->object_ul_x && c->player_ur_x >= c->object_ur_x
        && c->player_ur_y <= c->object_ul_y && c->player_ur_y >= c->object_ll_y)
        return (1);
    if (c->player_lr_x <= c->object_ul_x && c->player_lr_x >= c->object_ur_x
        && c->player_lr_y <= c->object_ul_y && c->player_lr_y >= c->object_ll_y)
        return (1);
    if (c->player_ll_x <= c->object_ul_x && c->player_ll_x >= c->object_ur_x
        && c->player_ll_y <= c->object_ul_y && c->player_ll_y >= c->object_ll_y)
        return (1);
    return (0);
}

int game_characters_collisions_condition(settings_t *settings,
    game_collisions_t *c, game_characters_t *current)
{
    if (game_characters_collisions_inside(c) == 1) {
        game_chat_selector(current, settings);
        return (1);
    }
    return (0);
}

int game_characters_collisions(settings_t *settings, int direction)
{
    game_characters_t *current = settings->game_characters;
    game_collisions_t *c = game_characters_collisions_init(settings, direction);

    for (; current != NULL; current = current->next) {
        if (current->first_element == 1 || current->player == 1) {
            continue;
        }
        sfVector2u size = sfTexture_getSize(current->texture);
        sfVector2f scale = sfSprite_getScale(current->sprite);

        c->object_ul_x = (current->x - 1920 / 2 + 20) * -1;
        c->object_ul_y = (current->y - 1080 / 2) * -1;
        c->object_ur_x = c->object_ul_x - size.x * scale.x;
        c->object_ur_y = c->object_ul_y;
        c->object_ll_x = c->object_ul_x;
        c->object_ll_y = c->object_ul_y - size.y * scale.y;
        if (game_characters_collisions_condition(settings, c, current) == 1)
            return (1);
    }
    return (0);
}
