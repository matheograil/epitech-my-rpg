/*
** EPITECH PROJECT, 2022
** INIT_GAME_INTERFACE.C
** File description:
** INIT_GAME_INTERFACE.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void init_game_interface_inventory_second(game_interface_t *game_interface)
{
    sfVector2f scale = { 2, 2 };
    sfVector2f position = { 510, 350 };

    game_interface->sp_inventory = sfSprite_create();
    game_interface->tx_inventory =
        sfTexture_createFromFile("./res/game_interface/inventory.png", NULL);
    sfSprite_setTexture(game_interface->sp_inventory,
        game_interface->tx_inventory, sfTrue);
    sfSprite_setScale(game_interface->sp_inventory, scale);
    sfSprite_setPosition(game_interface->sp_inventory, position);
}

void init_game_interface_skills(game_interface_t *game_interface)
{
    sfVector2f position = { 456, 225 };

    game_interface->sp_skills = sfSprite_create();
    game_interface->tx_skills =
        sfTexture_createFromFile("./res/game_interface/skills.png", NULL);
    sfSprite_setTexture(game_interface->sp_skills, game_interface->tx_skills,
        sfTrue);
    sfSprite_setPosition(game_interface->sp_skills, position);
}

void init_game_interface_help(game_interface_t *game_interface)
{
    game_interface->sp_help = sfSprite_create();
    game_interface->tx_help =
        sfTexture_createFromFile("./res/game_interface/help.jpg", NULL);
    sfSprite_setTexture(game_interface->sp_help, game_interface->tx_help,
        sfTrue);
}

game_interface_t *init_game_interface(void)
{
    static game_interface_t game_interface;

    game_interface.inventory = 0;
    game_interface.skills = 0;
    game_interface.help = 0;
    game_interface.sp_background = sfSprite_create();
    game_interface.tx_background =
        sfTexture_createFromFile("./res/game_interface/background.png", NULL);
    sfSprite_setTexture(game_interface.sp_background,
        game_interface.tx_background, sfTrue);
    init_game_interface_inventory_second(&game_interface);
    init_game_interface_skills(&game_interface);
    init_game_interface_help(&game_interface);
    return (&game_interface);
}
