/*
** EPITECH PROJECT, 2022
** GAME_INTERFACE_INVENTORY_ADD.C
** File description:
** GAME_INTERFACE_INVENTORY_ADD.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void game_interface_inventory_add_texture(game_interface_inventory_t *current,
    char *type)
{
    if (my_strcmp(type, "apple") == 0) {
        current->next->texture = sfTexture_createFromFile("./res/"
            "game_interface_inventory/apple.png", NULL);
    }
    if (my_strcmp(type, "sword") == 0) {
        current->next->texture = sfTexture_createFromFile("./res/"
            "game_interface_inventory/sword.png", NULL);
    }
    if (my_strcmp(type, "life_potion") == 0) {
        current->next->texture = sfTexture_createFromFile("./res/"
            "game_interface_inventory/life_potion.png", NULL);
    }
}

void game_interface_inventory_add(game_interface_inventory_t *head,
    float scale_value, char *type)
{
    game_interface_inventory_t *current = head;
    int i = 1;
    sfVector2f scale = { scale_value, scale_value };

    while (current->next != NULL) {
        i++;
        current = current->next;
    }
    if (i - 1 >= 27) {
        return;
    }
    current->next = malloc(sizeof(game_interface_inventory_t));
    current->next->type = type;
    current->next->first_element = 0;
    current->next->sprite = sfSprite_create();
    game_interface_inventory_add_texture(current, type);
    sfSprite_setTexture(current->next->sprite, current->next->texture, sfTrue);
    sfSprite_setScale(current->next->sprite, scale);
    current->next->next = NULL;
}
