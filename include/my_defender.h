/*
** EPITECH PROJECT, 2019
** runner
** File description:
** runner
*/

#ifndef RUNNER_H_
#define RUNNER_H_

#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "my.h"

typedef struct map_t
{
    char **def;
    int time;
}map_s;

typedef struct wintex_t
{
    sfVideoMode scale;
    sfRenderWindow *window;
    sfTexture *texture;
}wintex_s;

typedef struct rectsprite_t
{
    sfIntRect rect;
    sfSprite *sprite;

}rectsprite_s;

typedef struct evclock_t
{
    sfEvent event;
    sfClock *clock;
    sfClock *clocktwo;
    sfClock *clockthree;
}evclock_s;

typedef struct vecto_t
{
    sfVector2f twof, twoff;
    sfVector2i twoi, twoii;
    sfVector2u twou, twouu;
    sfVector3f threef, threeff;
}vecto_s;

typedef struct texfont_t
{
    sfFont *font;
    sfText *text;
    sfColor color;
}texfont_s;

typedef struct audio_t
{
    sfMusic *music;
}audio_s;

typedef struct varint_t
{
    float i, ii;
    float j, jj;
    float x, y;
    int rand, key;
    int pause, brak, audio, scene;
    int option;
}varint_s;

typedef struct varchar_t
{
    char c;
    char *str;
    char *str2;
}varchar_s;

typedef struct index_t
{
    struct wintex_t wintex;
    struct rectsprite_t rectsprite;
    struct texfont_t texfont;
    struct evclock_t evclock;
    struct vecto_t vecto;
    struct audio_t audio;
    struct varint_t varint;
    struct varchar_t varchar;
    struct index_t *next, *prev, *first;
}index_s;

// Main
int rdtsc(void);
void help_usage(void);
int main(int ac, char **av);

// Menu/initialisation_menu.c
void init_menu_one(void);

// Menu/menu_sprite_three.c
index_s button_back(void);
index_s level_icon(void);
index_s button_easy(void);

// Menu/menu_sprite_two.c
index_s music_volume_text(void);
index_s cursor_setting(void);
index_s barre_setting(void);
index_s button_option(void);
index_s button_quit(void);

// Menu/menu_sprite_one.c
index_s wallpaper(void);
index_s gui_menu(void);
index_s *particle(void);
index_s button_play(void);

// Menu/menu.c
void parse_drawing_lvl_game(index_s *index);
void parse_drawing_menu(index_s *index, index_s *chain);
void menu(index_s *index, index_s *chain);

// Menu/event_menu/extend_event_wait.c
void wait_press_play(index_s *index);

// Menu/event_menu/menu_events_one.c
void event_button_quit(index_s *index);
void event_button_option(index_s *index);
void event_button_play(index_s *index);
void event_window(index_s *index);
void event_index_menu(index_s *index);

// Menu/event_menu/menu_events_two.c
void event_button_back(index_s *index);
void cursor_set_volume(index_s *index);
void extend_cursor_setting(index_s *index);
void event_cursor_setting(index_s *index);

// Menu/event_menu/menu_events_three.c
void event_easy_button(index_s *index);

// Menu/draw_sprites/menu_draw_sprites_one.c
void draw_chain_particle(index_s *index, index_s *chain);
void draw_sprite_gui(index_s *index);
void draw_sprite_wall(index_s *index);
void draw_buttons(index_s *index);
void draw_setting_sound(index_s *index);

// Menu/draw_sprites/menu_draw_sprites_two.c
void draw_icon_level(index_s *index);
void draw_button_back(index_s *index);
void draw_difficulty(index_s *index);

// Menu/chain_list_menu.c
index_s *create_x_particles(void);

// Menu/clock_menu/clock_gui.c
void clock_button_side(index_s *index, int i);
void clock_button_up(index_s *index, int i);
void clock_gui(index_s *index);
void clock_icon_lvl(index_s *index);

// Menu/clock_menu/clock_particle-menu.c
void move_up_particle(index_s *chain);
void extend_move_up_particle(index_s *chain);

// Menu/clock_menu/clock_particle_menu_two.c
void extend_scale_shrink(index_s *chain);
void extend_scale_shrink_two(index_s *chain);
void extend_scale_grow(index_s *chain);
void extend_scale_grow_two(index_s *chain);
void set_scale_particle(index_s *chain);

// Menu/clock_menu/clock_particle_menu_three.c
void extend_rotate_particle(index_s *chain);
void move_rotate_particle(index_s *chain);

// Menu/clock_menu/clock_option.c
void set_pos_all_setting(index_s *index);
void clock_setting_volume(index_s *index);

// Menu/clock_menu/clock_difficulty.c
void clock_difficulty_button(index_s *index);

/*               Game                    */

// Game/initialisation_game.c
void init_game(void);

// Game/sprite_game/sprite_game_one.c
index_s *green_pig(void);
index_s *map(void);
index_s *cloud(void);
index_s *cloud_two(void);
index_s *pos(void);

// Game/sprite_game/sprite_game_two.c
index_s *gui_tower(void);
index_s *tower_one(void);
index_s *tower_two(void);
index_s *tower_three(void);
index_s *tower_four(void);

// Game/sprite_game/sprite_game_three.c
index_s *level_text_sprite(void);

// Game/event_game/event_game_one.c
void event_game_window(index_s **game);
void event_pause_game(index_s **game);
void event_hide_or_display_pos(index_s **game);

// Game/game.c
void game_dis(index_s **game);
void parse_draw_game(index_s **game);

// Game/draw_game_one.c
void draw_pig(index_s **game);
void draw_cloud(index_s **game);
void draw_wall(index_s **game);
void draw_position(index_s **game);

// Game/draw_game_two.c
void draw_tower_one(index_s **game);
void draw_tower_two(index_s **game);
void draw_tower_three(index_s **game);
void draw_tower_four(index_s **game);
void draw_gui_tower(index_s **game);

// Game/draw_game_three
void draw_tower_one_levels(index_s **game);
void draw_tower_two_levels(index_s **game);
void draw_tower_three_levels(index_s **game);
void draw_tower_four_levels(index_s **game);

// Game/draw_game_four.c
void draw_move_tower(index_s **game);

// Game/clock_game/clock_game_cloud.c
void clock_cloud_one(index_s **game);
void clock_cloud_two(index_s **game);

// Game/clock_game/clock_pig.c
void clock_move_pig(index_s **game);
void clock_animated_rigt_pig(index_s **game);

// Game/chain_list/chain_list.c
void prepare_case(index_s **game);
void create_case_game(index_s **game, int x, int y);

// Game/chain_list/chain_pig.c
void extend_set_case(index_s *newcase);
void create_wave_one(index_s **game);
void create_case_pig(index_s **game, int x, int y);

// Game/chain_list/chain_hover_tower.c
void create_case_tower_one(index_s **game);
void create_case_tower_two(index_s **game);
void create_case_tower_three(index_s **game);
void create_case_tower_four(index_s **game);

// Game/chain_list/free_casejj_one.c
void free_jj_one(index_s *chain);

// Game/event_game/event_hover.c
void hover_tower_one_gui(index_s **game);
void hover_tower_two_gui(index_s **game);
void hover_tower_three_gui(index_s **game);
void hover_tower_four_gui(index_s **game);
void hover_gui_tower(index_s **game);

// Game/sprite_game/sprite_pause_one.c
index_s *gui_pause(void);
index_s *button_play_pause(void);
index_s *button_quit_pause(void);


// Game/sprite_game/sprite_pause_two.c
index_s *button_back_pause(void);
index_s *button_option_pause(void);
index_s *barre_setting_pause(void);
index_s *cursor_setting_pause(void);
index_s *music_volume_text_pause(void);


// Game/pause/draw_pause.c
void draw_gui_pause(index_s **game);
void draw_play_pause(index_s **game);
void draw_particle_pause(index_s **game);
void draw_settings_pause(index_s **game);
void draw_setvol_pause(index_s **game);

// Game/pause/clock_gui_pause.c
void clock_gui_pause(index_s **game);
void clock_button_side_pause(index_s **game, int i);
void clock_button_up_pause(index_s **game, int i);
void clock_button_up2_pause(index_s **game);

// Game/pause/clock_setting_pause.c
void clock_setting_volume_pause(index_s **game);
void set_pos_all_setting_pause(index_s **game);

// Game/pause/event_pause.c
void event_button_quit_pause(index_s **game);
void event_button_option_pause(index_s **game);
void event_button_play_pause(index_s **game);
void event_button_back_pause(index_s **game);

// Game/pause/event_vol_pause.c
void cursor_set_volume_pause(index_s **game);
void extend_cursor_setting_pause(index_s **game);
void event_cursor_setting_pause(index_s **game);

// Game/event_game/extend_event_hover.c
void extend_tower_one(index_s **game);

// Game/chain_list/create_case_tower.c
void create_case_towerone(index_s **game);


#endif /* !RUNNER_H_ */
