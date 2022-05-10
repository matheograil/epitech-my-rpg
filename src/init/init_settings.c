/*
** EPITECH PROJECT, 2022
** INIT_SETTINGS.C
** File description:
** INIT_SETTINGS.C file.
*/

#include "../../inc/my.h"
#include "../../inc/prototypes.h"

void init_settings_audio(settings_t *settings)
{
    settings->music = sfMusic_createFromFile("./res/settings/music.ogg");
    sfMusic_setLoop(settings->music, sfTrue);
    sfMusic_setVolume(settings->music, settings->volume);
    sfMusic_play(settings->music);
    settings->bf_sound_click =
        sfSoundBuffer_createFromFile("./res/settings/sound_click.ogg");
    settings->sound_click = sfSound_create();
    sfSound_setBuffer(settings->sound_click, settings->bf_sound_click);
    sfSound_setVolume(settings->sound_click, settings->volume);
    settings->bf_sound_pain =
        sfSoundBuffer_createFromFile("./res/settings/sound_pain.ogg");
    settings->sound_pain = sfSound_create();
    sfSound_setBuffer(settings->sound_pain, settings->bf_sound_pain);
    sfSound_setVolume(settings->sound_pain, settings->volume);
    settings->bf_sound_attack =
        sfSoundBuffer_createFromFile("./res/settings/sound_attack.ogg");
    settings->sound_attack = sfSound_create();
    sfSound_setBuffer(settings->sound_attack, settings->bf_sound_attack);
    sfSound_setVolume(settings->sound_attack, settings->volume);
}

settings_t *init_settings_one(void)
{
    static settings_t settings;

    settings.status = "menu_home";
    settings.life = 3;
    settings.exp = 0;
    settings.damages = 20;
    settings.skills_damages = 0;
    settings.volume = 50;
    settings.quest_started = 0;
    settings.time = 0;
    settings.last_attack = 0;
    init_settings_audio(&settings);
    settings.clock = sfClock_create();
    settings.sp_cursor = sfSprite_create();
    settings.tx_cursor =
        sfTexture_createFromFile("./res/settings/cursor.png", NULL);
    sfSprite_setTexture(settings.sp_cursor, settings.tx_cursor, sfTrue);
    settings.font = sfFont_createFromFile("./res/settings/font.ttf");
    init_settings_two(&settings);
    return (&settings);
}

void init_settings_two(settings_t *settings)
{
    settings->menu_home = init_menu_home();
    settings->menu_settings = init_menu_settings();
    settings->game_map = init_game_map();
    settings->game_map_objects = init_game_map_objects();
    settings->game_enemies = init_game_enemies();
    settings->game_characters = init_game_characters();
    settings->game_weather = init_game_weather();
    settings->game_chat = init_game_chat(settings);
    settings->game_hud = init_game_hud(settings);
    settings->game_interface = init_game_interface();
    settings->game_interface_inventory = init_game_interface_inventory();
    settings->game_settings = init_game_settings();
}
