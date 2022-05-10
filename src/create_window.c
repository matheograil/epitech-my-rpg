/*
** EPITECH PROJECT, 2022
** CREATE_WINDOW.C
** File description:
** CREATE_WINDOW.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void create_window(settings_t *settings)
{
    sfVideoMode video_mode = { 1920, 1080, 32 };
    sfEvent event;

    settings->window = sfRenderWindow_create(video_mode, "The Villager",
        sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(settings->window, 60);
    while (sfRenderWindow_isOpen(settings->window)) {
        settings->time = sfClock_getElapsedTime(settings->clock).microseconds;
        menu_selector(settings);
        game_selector_one(settings);
        display_cursor(settings);
        analyze_events(settings, event);
        sfRenderWindow_display(settings->window);
    }
}
