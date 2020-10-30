/*
** EPITECH PROJECT, 2020
** game
** File description:
** game
*/

#include "my_defender.h"

void parse_draw_game(index_s **game)
{
        draw_wall(game);
        if (game[0]->varint.key == 1)
                draw_position(game);
        draw_pig(game);
        draw_gui_tower(game);
        draw_tower_one(game);
        draw_tower_two(game);
        draw_tower_three(game);
        draw_tower_four(game);
        draw_cloud(game);
        draw_move_tower(game);
        if (game[0]->varint.pause == 1)
                draw_gui_pause(game);
}

void game_dis(index_s **game)
{
    sfMusic_play(game[0]->audio.music);
    sfMusic_setLoop(game[0]->audio.music, sfTrue);
    while (sfRenderWindow_isOpen(game[0]->wintex.window)) {
            parse_draw_game(game);
            while (sfRenderWindow_pollEvent(game[0]->wintex.window,
                &game[0]->evclock.event)) {
                event_pause_game(game);
                event_game_window(game);
                if (game[0]->varint.pause == 0)
                        event_hide_or_display_pos(game);
                }
        if (game[16]->varint.brak == 1)
                break;
        }
        if (game[16]->varint.brak == 1) {
                sfMusic_destroy(game[0]->audio.music);
                sfRenderWindow_close(game[0]->wintex.window);
                init_menu_one();
        }
}