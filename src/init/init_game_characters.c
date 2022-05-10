/*
** EPITECH PROJECT, 2022
** INIT_GAME_CHARACTERS.C
** File description:
** INIT_GAME_CHARACTERS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

game_characters_t *init_game_characters(void)
{
    game_characters_t *head = malloc(sizeof(game_characters_t));
    int player_position[2] = { 1920 / 2 - 85, 1080 / 2 - 100 };
    int believing_witch_position[2] = { 1000, 1350 };
    int old_man_position[2] = { 2500, 3900 };
    int guardian_position[2] = { 1000, 5000 };
    int witch_villager_position[2] = { 5600, 2400 };

    head->next = NULL;
    head->first_element = 1;
    game_characters_add(head, player_position, 3, "player");
    game_characters_add(head, believing_witch_position, 2, "believing_witch");
    game_characters_add(head, old_man_position, 2, "old_man");
    game_characters_add(head, guardian_position, 2, "guardian");
    game_characters_add(head, witch_villager_position, 2, "witch_villager");
    return (head);
}
