/*
** EPITECH PROJECT, 2020
** clock_move_tower
** File description:
** clock_move_tower
*/

#include "my_defender.h"

void move_tower_one(index_s **game)
{
    game[0]->vecto.twoii = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);
    index_s *save = game[6]->first;
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[0]->evclock.clockthree)) > 1) {
            for (; game[6] != NULL; game[6] = game[6]->next)
                if (game[6]->varint.jj == 3) {
                    game[6]->vecto.twof.x = game[0]->vecto.twoii.x;
                    game[6]->vecto.twof.y = game[0]->vecto.twoii.y;
                    sfSprite_setPosition(game[6]->rectsprite.sprite,
                        game[6]->vecto.twof);
                }

            sfClock_restart(game[0]->evclock.clockthree);
        }
}

void clock_move_tower(index_s **game)
{
    if (game[0]->varint.x == 1) {
        move_tower_one(game);
    }
}