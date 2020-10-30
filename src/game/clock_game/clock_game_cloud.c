/*
** EPITECH PROJECT, 2020
** clock_game_cloud
** File description:
** clock_game_cloud
*/

#include "my_defender.h"

void clock_cloud_two(index_s **game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[2]->evclock.clock)) > 1) {
            if (game[2]->vecto.twof.x >= -1920)
                game[2]->vecto.twof.x -= 0.10;
            if (game[2]->vecto.twof.x <= -1920)
                game[2]->vecto.twof.x = 1920;
            sfClock_restart(game[2]->evclock.clock);
        }
}

void clock_cloud_one(index_s **game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[1]->evclock.clock)) > 1) {
            if (game[1]->vecto.twof.x >= -1920)
                game[1]->vecto.twof.x -= 0.10;
            if (game[1]->vecto.twof.x <= -1920)
                game[1]->vecto.twof.x = 1920;
            sfClock_restart(game[1]->evclock.clock);
        }
}