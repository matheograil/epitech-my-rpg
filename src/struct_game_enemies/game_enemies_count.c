/*
** EPITECH PROJECT, 2022
** GAME_ENEMIES_COUNT.C
** File description:
** GAME_ENEMIES_COUNT.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

int game_enemies_count(game_enemies_t *head)
{
    game_enemies_t *current = head;
    int i = 0;

    while (current != NULL) {
        i++;
        current = current->next;
    }
    return (i);
}
