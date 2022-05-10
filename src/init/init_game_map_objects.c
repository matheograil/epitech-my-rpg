/*
** EPITECH PROJECT, 2022
** INIT_GAME_MAP_OBJECTS.C
** File description:
** INIT_GAME_MAP_OBJECTS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

game_map_objects_t *init_game_map_objects(void)
{
    game_map_objects_t *head = malloc(sizeof(game_map_objects_t));

    head->next = NULL;
    head->first_element = 1;
    init_game_map_objects_spawn_churches(head);
    init_game_map_objects_spawn_houses(head);
    init_game_map_objects_spawn_lakes(head);
    init_game_map_objects_spawn_rocks(head);
    init_game_map_objects_spawn_trees(head);
    return (head);
}
