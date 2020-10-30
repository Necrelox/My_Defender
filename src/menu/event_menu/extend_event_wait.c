/*
** EPITECH PROJECT, 2020
** extend_event_wait
** File description:
** extend_event_wait
*/

#include "my_defender.h"

void wait_press_play(index_s *index)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        index[0].evclock.clock)) > 500) {
            index[0].varint.i = 1;
            sfClock_restart(index[0].evclock.clock);
        }
        if (index[0].varint.i == 1)
            draw_difficulty(index);
}