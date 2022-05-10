/*
** EPITECH PROJECT, 2022
** GAME_MAP_OBJECTS_ADD.C
** File description:
** GAME_MAP_OBJECTS_ADD.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_map_objects_add_texture(game_map_objects_t *current, char *type)
{
    if (my_strcmp(type, "house") == 0)
        current->next->texture =
            sfTexture_createFromFile("./res/game_map_objects/house.png", NULL);
    if (my_strcmp(type, "lake") == 0)
        current->next->texture =
            sfTexture_createFromFile("./res/game_map_objects/lake.png", NULL);
    if (my_strcmp(type, "rock") == 0)
        current->next->texture =
            sfTexture_createFromFile("./res/game_map_objects/rock.png", NULL);
    if (my_strcmp(type, "tree") == 0)
        current->next->texture =
            sfTexture_createFromFile("./res/game_map_objects/tree.png", NULL);
    if (my_strcmp(type, "church") == 0)
        current->next->texture =
            sfTexture_createFromFile("./res/game_map_objects/church.png", NULL);
}

void game_map_objects_add(game_map_objects_t *head, int *position,
    int scale_value, char *type)
{
    game_map_objects_t *current = head;
    sfVector2f scale = { scale_value, scale_value };

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = malloc(sizeof(game_map_objects_t));
    current->next->x = position[0];
    current->next->y = position[1];
    current->next->first_element = 0;
    current->next->sprite = sfSprite_create();
    game_map_objects_add_texture(current, type);
    sfSprite_setTexture(current->next->sprite, current->next->texture, sfTrue);
    sfSprite_setScale(current->next->sprite, scale);
    current->next->next = NULL;
}
