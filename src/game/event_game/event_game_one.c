/*
** EPITECH PROJECT, 2020
** event_game_one
** File description:
** event_game_one
*/

#include "my_defender.h"

void event_pause_game(index_s **game)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) &&
        sfTime_asMilliseconds(sfClock_getElapsedTime(
            game[0]->evclock.clocktwo)) > 100) {
        if (game[0]->varint.pause == 0) {
            game[0]->varint.pause = 1;
            sfClock_restart(game[0]->evclock.clocktwo);
            return ;
        }
        if (game[0]->varint.pause == 1) {
            game[0]->varint.pause = 0;
        sfClock_restart(game[0]->evclock.clocktwo);
            return ;
        }
    }
    if (game[0]->varint.option == 1) event_cursor_setting_pause(game);
    if (game[19]->varint.option == 1) extend_cursor_setting_pause(game);
}

void event_game_window(index_s **game)
{
    if (game[0]->evclock.event.type == sfEvtClosed) {
        sfMusic_destroy(game[0]->audio.music);
        sfRenderWindow_close(game[0]->wintex.window);
    }
}

void event_hide_or_display_pos(index_s **game)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) &&
        sfTime_asMilliseconds(sfClock_getElapsedTime(
            game[0]->evclock.clock)) > 100) {
        if (game[0]->varint.key == 0) {
            game[0]->varint.key = 1;
            sfClock_restart(game[0]->evclock.clock);
            return;
        }
        else if (game[0]->varint.key == 1) {
            game[0]->varint.key = 0;
            sfClock_restart(game[0]->evclock.clock);
            return;
        }
    }
}