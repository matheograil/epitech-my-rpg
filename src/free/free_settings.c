/*
** EPITECH PROJECT, 2022
** FREE_SETTINGS.C
** File description:
** FREE_SETTINGS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void free_settings(settings_t *settings)
{
    sfMusic_destroy(settings->music);
    sfSoundBuffer_destroy(settings->bf_sound_click);
    sfSound_destroy(settings->sound_click);
    sfSoundBuffer_destroy(settings->bf_sound_pain);
    sfSound_destroy(settings->sound_pain);
    sfSoundBuffer_destroy(settings->bf_sound_attack);
    sfSound_destroy(settings->sound_attack);
    sfClock_destroy(settings->clock);
    sfSprite_destroy(settings->sp_cursor);
    sfTexture_destroy(settings->tx_cursor);
    sfFont_destroy(settings->font);
}
