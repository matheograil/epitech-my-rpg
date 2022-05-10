/*
** EPITECH PROJECT, 2022
** SET_VOLUME.C
** File description:
** SET_VOLUME.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void set_volume(settings_t *settings, int value)
{
    if (settings->volume + value >= 0 && settings->volume + value <= 100) {
        settings->volume += value;
    }
    sfMusic_setVolume(settings->music, settings->volume);
    sfSound_setVolume(settings->sound_click, settings->volume);
    sfSound_setVolume(settings->sound_pain, settings->volume);
    sfSound_setVolume(settings->sound_attack, settings->volume);
}
