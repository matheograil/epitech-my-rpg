/*
** EPITECH PROJECT, 2022
** PROTOTYPES.H
** File description:
** PROTOTYPES.H file.
*/

#ifndef PROTOTYPES_H_

    #define PROTOTYPES_H_

typedef struct menu_home_s {
    int element_selected;
    sfSprite *sp_background;
    sfTexture *tx_background;
    sfSprite *sp_logo;
    sfTexture *tx_logo;
    sfSprite *sp_play;
    sfTexture *tx_play;
    sfSprite *sp_play_pressed;
    sfTexture *tx_play_pressed;
    sfSprite *sp_settings;
    sfTexture *tx_settings;
    sfSprite *sp_settings_pressed;
    sfTexture *tx_settings_pressed;
    sfSprite *sp_exit;
    sfTexture *tx_exit;
    sfSprite *sp_exit_pressed;
    sfTexture *tx_exit_pressed;
} menu_home_t;

typedef struct menu_settings_s {
    int element_selected;
    sfSprite *sp_background;
    sfTexture *tx_background;
    sfSprite *sp_board;
    sfTexture *tx_board;
    sfSprite *sp_sound_less;
    sfTexture *tx_sound_less;
    sfSprite *sp_sound_less_pressed;
    sfTexture *tx_sound_less_pressed;
    sfSprite *sp_sound_more;
    sfTexture *tx_sound_more;
    sfSprite *sp_sound_more_pressed;
    sfTexture *tx_sound_more_pressed;
    sfSprite *sp_60_fps;
    sfTexture *tx_60_fps;
    sfSprite *sp_60_fps_pressed;
    sfTexture *tx_60_fps_pressed;
    sfSprite *sp_120_fps;
    sfTexture *tx_120_fps;
    sfSprite *sp_120_fps_pressed;
    sfTexture *tx_120_fps_pressed;
    sfSprite *sp_back;
    sfTexture *tx_back;
    sfSprite *sp_back_pressed;
    sfTexture *tx_back_pressed;
} menu_settings_t;

typedef struct game_map_s {
    int x;
    int y;
    int last_update;
    sfSprite *sp_map;
    sfTexture *tx_map;
} game_map_t;

typedef struct game_map_objects_s {
    int x;
    int y;
    int first_element;
    sfSprite *sprite;
    sfTexture *texture;
    struct game_map_objects_s *next;
} game_map_objects_t;

typedef struct game_enemies_s {
    int life;
    int x;
    int y;
    int start;
    int left;
    int max_left;
    int width;
    int height;
    int first_element;
    int last_update;
    int last_attack;
    sfSprite *sprite;
    sfTexture *texture;
    struct game_enemies_s *next;
} game_enemies_t;

typedef struct game_enemies_add_s {
    char *type;
    int x;
    int y;
    int start;
    int left;
    int max_left;
    int width;
    int height;
    int scale;
} game_enemies_add_t;

typedef struct game_characters_s {
    char *type;
    int x;
    int y;
    int status;
    int player;
    int chat;
    int first_element;
    int last_update;
    sfSprite *sprite;
    sfTexture *texture;
    struct game_characters_s *next;
} game_characters_t;

typedef struct game_weather_s {
    int end_rain;
    int last_update_rain;
    sfSprite *sp_rain;
    sfTexture *tx_rain;
} game_weather_t;

typedef struct game_chat_s {
    char *text;
    int status;
    int last_update;
    sfSprite *sp_box;
    sfTexture *tx_box;
    sfText *box_text;
} game_chat_t;

typedef struct game_hud_s {
    sfSprite *sp_heart_one;
    sfSprite *sp_heart_two;
    sfSprite *sp_heart_three;
    sfTexture *tx_heart;
    sfSprite *sp_exp;
    sfTexture *tx_exp;
    sfText *exp_text;
} game_hud_t;

typedef struct game_interface_s {
    int inventory;
    int skills;
    int help;
    sfSprite *sp_background;
    sfTexture *tx_background;
    sfSprite *sp_inventory;
    sfTexture *tx_inventory;
    sfSprite *sp_skills;
    sfTexture *tx_skills;
    sfSprite *sp_help;
    sfTexture *tx_help;
} game_interface_t;

typedef struct game_interface_inventory_s {
    char *type;
    int first_element;
    sfSprite *sprite;
    sfTexture *texture;
    struct game_interface_inventory_s *next;
} game_interface_inventory_t;

typedef struct game_settings_s {
    int element_selected;
    sfSprite *sp_background;
    sfTexture *tx_background;
    sfSprite *sp_resume;
    sfTexture *tx_resume;
    sfSprite *sp_resume_pressed;
    sfTexture *tx_resume_pressed;
    sfSprite *sp_back;
    sfTexture *tx_back;
    sfSprite *sp_back_pressed;
    sfTexture *tx_back_pressed;
    sfSprite *sp_exit;
    sfTexture *tx_exit;
    sfSprite *sp_exit_pressed;
    sfTexture *tx_exit_pressed;
} game_settings_t;

typedef struct settings_s {
    char *status;
    int life;
    int exp;
    int damages;
    int skills_damages;
    float volume;
    int quest_started;
    int time;
    int last_attack;
    sfRenderWindow *window;
    sfMusic *music;
    sfSoundBuffer *bf_sound_click;
    sfSound *sound_click;
    sfSoundBuffer *bf_sound_pain;
    sfSound *sound_pain;
    sfSoundBuffer *bf_sound_attack;
    sfSound *sound_attack;
    sfClock *clock;
    sfSprite *sp_cursor;
    sfTexture *tx_cursor;
    sfFont *font;
    menu_home_t *menu_home;
    menu_settings_t *menu_settings;
    game_map_t *game_map;
    game_map_objects_t *game_map_objects;
    game_enemies_t *game_enemies;
    game_characters_t *game_characters;
    game_weather_t *game_weather;
    game_chat_t *game_chat;
    game_hud_t *game_hud;
    game_interface_t *game_interface;
    game_interface_inventory_t *game_interface_inventory;
    game_settings_t *game_settings;
} settings_t;

typedef struct game_collisions_s {
    int player_ul_x;
    int player_ul_y;
    int player_ur_x;
    int player_ur_y;
    int player_lr_x;
    int player_lr_y;
    int player_ll_x;
    int player_ll_y;
    int object_ul_x;
    int object_ul_y;
    int object_ur_x;
    int object_ur_y;
    int object_ll_x;
    int object_ll_y;
} game_collisions_t;

void free_game_chat(game_chat_t *);
void free_game_hud(game_hud_t *);
void free_game_interface(game_interface_t *);
void free_game_map(game_map_t *);
void free_game_settings_btn(game_settings_t *);
void free_game_settings(game_settings_t *);
void free_game_weather(game_weather_t *);
void free_menu_home_btn(menu_home_t *);
void free_menu_home(menu_home_t *);
void free_menu_settings_btn(menu_settings_t *);
void free_menu_settings(menu_settings_t *);
void free_settings(settings_t *);

void game_actions(settings_t *);
void game_init(settings_t *);
void game_over(settings_t *);
void game_reset(settings_t *);

void game_characters_npc(settings_t *);
int game_characters_player_rectangle_top(settings_t *);
sfIntRect game_characters_player_rectangle(settings_t *, sfIntRect,
    game_characters_t *);
void game_characters_player(settings_t *);

void game_chat_actions(settings_t *);
void game_chat_add(settings_t *, char *);
int game_chat_box_end(settings_t *);
char *game_chat_box_text(char *, int, int);
void game_chat_box(settings_t *);
void game_chat_selector(game_characters_t *, settings_t *);

void game_enemies_damages(settings_t *, game_enemies_t *);
void game_enemies_deaths(settings_t *);
sfIntRect game_enemies_display_rectangle(settings_t *, sfIntRect,
    game_enemies_t *);
void game_enemies_display(settings_t *);
void game_enemies_spawn_goblins(settings_t *);
void game_enemies_spawn_skeletons(settings_t *);
void game_enemies_spawn(settings_t *);

void game_hud_exp(settings_t *);
void game_hud_hearts(settings_t *);

void game_interface_background(settings_t *);
void game_interface_help(settings_t *);
void game_interface_inventory(settings_t *);
void game_interface_skills(settings_t *);

void game_interface_help_actions(settings_t *);

void game_interface_inventory_actions_keys(settings_t *);
void game_interface_inventory_actions_buttons(settings_t *, sfMouseButtonEvent);
void game_interface_inventory_items(settings_t *);
void game_interface_inventory_stats_auto(settings_t *);
int game_interface_inventory_stats_click_apple(settings_t *,
    game_interface_inventory_t *);
int game_interface_inventory_stats_click_life_potion(settings_t *,
    game_interface_inventory_t *);
void game_interface_inventory_stats_click(settings_t *, int, int);

void game_interface_skills_actions_keys(settings_t *);
void game_interface_skills_actions_buttons(settings_t *, sfMouseButtonEvent);

int game_map_actions_up(settings_t *, int);
int game_map_actions_right(settings_t *, int);
int game_map_actions_down(settings_t *, int);
int game_map_actions_left(settings_t *, int);
void game_map_actions(settings_t *);
void game_map_display(settings_t *);

void game_map_objects_display(settings_t *);

void game_settings_actions(settings_t *, sfMouseButtonEvent);
void game_settings_background(settings_t *);
void game_settings_btn_pressed_resume(settings_t *);
void game_settings_btn_pressed_back(settings_t *);
void game_settings_btn_pressed_exit(settings_t *);
void game_settings_btn(settings_t *);
void game_settings_mouse(settings_t *);

void game_weather_rain_random(settings_t *);
void game_weather_rain(settings_t *);

game_characters_t *init_game_characters(void);
game_chat_t *init_game_chat(settings_t *);
game_enemies_t *init_game_enemies(void);
void init_game_hud_hearts(game_hud_t *);
void init_game_hud_exp(game_hud_t *, settings_t *);
game_hud_t *init_game_hud(settings_t *);
game_interface_inventory_t *init_game_interface_inventory(void);
void init_game_interface_inventory_second(game_interface_t *);
void init_game_interface_skills(game_interface_t *);
void init_game_interface_help(game_interface_t *);
game_interface_t *init_game_interface(void);
void init_game_map_objects_spawn_churches(game_map_objects_t *);
void init_game_map_objects_spawn_houses(game_map_objects_t *);
void init_game_map_objects_spawn_lakes(game_map_objects_t *);
void init_game_map_objects_spawn_rocks(game_map_objects_t *);
void init_game_map_objects_spawn_trees(game_map_objects_t *);
game_map_objects_t *init_game_map_objects(void);
game_map_t *init_game_map(void);
void init_game_settings_resume(game_settings_t *);
void init_game_settings_back(game_settings_t *);
void init_game_settings_exit(game_settings_t *);
game_settings_t *init_game_settings(void);
game_weather_t *init_game_weather(void);
void init_menu_home_play(menu_home_t *);
void init_menu_home_settings(menu_home_t *);
void init_menu_home_exit(menu_home_t *);
menu_home_t *init_menu_home(void);
void init_menu_settings_btn_sound_less(menu_settings_t *);
void init_menu_settings_btn_sound_more(menu_settings_t *);
void init_menu_settings_btn_60_fps(menu_settings_t *);
void init_menu_settings_btn_120_fps(menu_settings_t *);
void init_menu_settings_btn_back(menu_settings_t *);
void init_menu_settings_board(menu_settings_t *);
menu_settings_t *init_menu_settings(void);
void init_settings_audio(settings_t *);
settings_t *init_settings_one(void);
void init_settings_two(settings_t *);

void menu_home_actions(settings_t *, sfMouseButtonEvent);
void menu_home_background(settings_t *);
void menu_home_btn_pressed_play(settings_t *);
void menu_home_btn_pressed_settings(settings_t *);
void menu_home_btn_pressed_quit(settings_t *);
void menu_home_btn(settings_t *);
void menu_home_logo(settings_t *);
void menu_home_mouse(settings_t *);

void menu_settings_actions_one(settings_t *, sfMouseButtonEvent);
void menu_settings_actions_two(settings_t *, int, int);
void menu_settings_background(settings_t *);
void menu_settings_board(settings_t *);
void menu_settings_btn_pressed_sound_less(settings_t *);
void menu_settings_btn_pressed_sound_more(settings_t *);
void menu_settings_btn_pressed_60_fps(settings_t *);
void menu_settings_btn_pressed_120_fps(settings_t *);
void menu_settings_btn_pressed_back(settings_t *);
void menu_settings_btn(settings_t *);
void menu_settings_mouse_one(settings_t *);
void menu_settings_mouse_two(settings_t *, int, int, int);

void game_characters_add_texture_one(game_characters_t *, char *);
void game_characters_add_texture_two(game_characters_t *, char *);
void game_characters_add(game_characters_t *, int *, int, char *);
game_collisions_t *game_characters_collisions_init(settings_t *, int);
int game_characters_collisions_inside(game_collisions_t *);
int game_characters_collisions_condition(settings_t *, game_collisions_t *,
    game_characters_t *);
int game_characters_collisions(settings_t *, int);
void game_characters_delete_first(game_characters_t **);
int game_characters_free_count(game_characters_t *);
void game_characters_free(game_characters_t *);
void game_characters_player_update_status(game_characters_t *, int);
int game_characters_player_get_status(game_characters_t *);
void game_characters_reset(game_characters_t *);

void game_enemies_add_texture(game_enemies_t *, char *);
void game_enemies_add_one(game_enemies_t *, game_enemies_add_t *);
void game_enemies_add_two(game_enemies_t *, game_enemies_add_t *);
game_collisions_t *game_enemies_collisions_init(settings_t *, int);
void game_enemies_collisions_coords(game_collisions_t *, sfVector2u, sfVector2f,
    game_enemies_t *);
int game_enemies_collisions_inside(game_collisions_t *);
int game_enemies_collisions(settings_t *, int);
int game_enemies_count(game_enemies_t *);
void game_enemies_delete_first(game_enemies_t **);
void game_enemies_delete(game_enemies_t **, int);
int game_enemies_free_count(game_enemies_t *);
void game_enemies_free(game_enemies_t *);
void game_enemies_reset(game_enemies_t *);

void game_interface_inventory_add_texture(game_interface_inventory_t *, char *);
void game_interface_inventory_add(game_interface_inventory_t *, float, char *);
void game_interface_inventory_delete_first(game_interface_inventory_t **);
void game_interface_inventory_delete(game_interface_inventory_t **, int);
int game_interface_inventory_free_count(game_interface_inventory_t *);
void game_interface_inventory_free(game_interface_inventory_t *);
void game_interface_inventory_reset(game_interface_inventory_t *);

void game_map_objects_add_texture(game_map_objects_t *, char *);
void game_map_objects_add(game_map_objects_t *, int *, int, char *);
game_collisions_t *game_map_objects_collisions_init(settings_t *, int);
int game_map_objects_collisions_inside(game_collisions_t *);
int game_map_objects_collisions(settings_t *, int);
void game_map_objects_delete_first(game_map_objects_t **);
int game_map_objects_free_count(game_map_objects_t *);
void game_map_objects_free(game_map_objects_t *);

void analyze_events_buttons(settings_t *, sfEvent);
void analyze_events(settings_t *, sfEvent);

void close_window(settings_t *);

void create_window(settings_t *);

void display_cursor(settings_t *);

void game_selector_one(settings_t *);
void game_selector_two(settings_t *);
void game_settings_selector(settings_t *);

char *get_str(char *);

void menu_selector(settings_t *);

int main(int, char **);

void print_help(void);

void set_volume(settings_t *, int);

#endif /* !PROTOTYPES_H_ */
