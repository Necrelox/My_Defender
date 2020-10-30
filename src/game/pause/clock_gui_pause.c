/*
** EPITECH PROJECT, 2020
** clock_gui_pause
** File description:
** clock_gui_pause
*/

#include "my_defender.h"

void clock_button_side_pause(index_s **game, int i)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[i]->evclock.clocktwo)) > 1) {
            if (game[i]->varint.pause == 0) {
                game[i]->varint.j++;
                game[i]->vecto.twof.x -= 0.10;
                sfSprite_setPosition(game[i]->rectsprite.sprite,
                    game[i]->vecto.twof);
                if (game[i]->varint.j == 200)
                    game[i]->varint.pause = 1;
            }
            if (game[i]->varint.pause == 1) {
                game[i]->varint.j--;
                game[i]->vecto.twof.x += 0.10;
                sfSprite_setPosition(game[i]->rectsprite.sprite,
                    game[i]->vecto.twof);
                if (game[i]->varint.j == 0)
                    game[i]->varint.pause = 0;
            }
            sfClock_restart(game[i]->evclock.clocktwo);
        }
}

void clock_button_up2_pause(index_s **game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[17]->evclock.clock)) > 1) {
            if (game[12]->varint.key == 0) {
                game[17]->vecto.twof.y -= 0.15;
                sfSprite_setPosition(game[17]->rectsprite.sprite,
                    game[17]->vecto.twof);
                if (game[12]->varint.jj == 250)
                    game[12]->varint.key = 1;
            }
            if (game[12]->varint.key == 1) {
                game[17]->vecto.twof.y += 0.15;
                sfSprite_setPosition(game[17]->rectsprite.sprite,
                    game[17]->vecto.twof);
                if (game[12]->varint.jj == 0)
                    game[12]->varint.key = 0;
            }
            sfClock_restart(game[17]->evclock.clock);
        }
}

void clock_button_up_pause(index_s **game, int i)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[i]->evclock.clock)) > 1) {
            if (game[12]->varint.key == 0) {
                game[i]->vecto.twof.y -= 0.15;
                sfSprite_setPosition(game[i]->rectsprite.sprite,
                    game[i]->vecto.twof);
                if (game[12]->varint.jj == 250)
                    game[12]->varint.key = 1;
            }
            if (game[12]->varint.key == 1) {
                game[i]->vecto.twof.y += 0.15;
                sfSprite_setPosition(game[i]->rectsprite.sprite,
                    game[i]->vecto.twof);
                if (game[12]->varint.jj == 0)
                    game[12]->varint.key = 0;
            }
            sfClock_restart(game[i]->evclock.clock);
        }
}

void clock_gui_pause(index_s **game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[12]->evclock.clock)) > 1) {
            if (game[12]->varint.key == 0) {
                game[12]->varint.jj++;
                game[12]->vecto.twof.y -= 0.15;
                sfSprite_setPosition(game[12]->rectsprite.sprite,
                    game[12]->vecto.twof);
                if (game[12]->varint.jj == 250)
                    game[12]->varint.key = 1;
            }
            if (game[12]->varint.key == 1) {
                game[12]->varint.jj--;
                game[12]->vecto.twof.y += 0.15;
                sfSprite_setPosition(game[12]->rectsprite.sprite,
                    game[12]->vecto.twof);
                if (game[12]->varint.jj == 0)
                    game[12]->varint.key = 0;
            }
            sfClock_restart(game[12]->evclock.clock);
        }
}