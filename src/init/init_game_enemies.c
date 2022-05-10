/*
** EPITECH PROJECT, 2022
** INIT_GAME_ENEMIES.C
** File description:
** INIT_GAME_ENEMIES.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

game_enemies_t *init_game_enemies(void)
{
    game_enemies_t *head = malloc(sizeof(game_enemies_t));

    head->next = NULL;
    head->first_element = 1;
    return (head);
}
