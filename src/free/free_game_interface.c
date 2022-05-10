/*
** EPITECH PROJECT, 2022
** FREE_GAME_INTERFACE.C
** File description:
** FREE_GAME_INTERFACE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void free_game_interface(game_interface_t *game_interface)
{
    sfSprite_destroy(game_interface->sp_background);
    sfTexture_destroy(game_interface->tx_background);
    sfSprite_destroy(game_interface->sp_inventory);
    sfTexture_destroy(game_interface->tx_inventory);
    sfSprite_destroy(game_interface->sp_skills);
    sfTexture_destroy(game_interface->tx_skills);
    sfSprite_destroy(game_interface->sp_help);
    sfTexture_destroy(game_interface->tx_help);
}
