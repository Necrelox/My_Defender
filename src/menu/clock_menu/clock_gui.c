/*
** EPITECH PROJECT, 2020
** clock_gui
** File description:
** clock_gui
*/

#include "my_defender.h"

void clock_icon_lvl(index_s *index)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        index[9].evclock.clock)) > 1) {
            if (index[1].varint.key == 0) {
                index[9].vecto.twof.y -= 0.15, index[8].vecto.twof.y -= 0.15;
                sfSprite_setPosition(index[9].rectsprite.sprite,
                    index[9].vecto.twof);
                if (index[1].varint.jj == 250)
                    index[1].varint.key = 1;
            }
            if (index[1].varint.key == 1) {
                index[9].vecto.twof.y += 0.15, index[8].vecto.twof.y += 0.15;
                sfSprite_setPosition(index[9].rectsprite.sprite,
                    index[9].vecto.twof);
                if (index[1].varint.jj == 0)
                    index[1].varint.key = 0;
            }
            sfClock_restart(index[9].evclock.clock);
        }
}

void clock_button_side(index_s *index, int i)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        index[i].evclock.clocktwo)) > 1) {
            if (index[i].varint.pause == 0) {
                index[i].varint.j++;
                index[i].vecto.twof.x -= 0.10;
                sfSprite_setPosition(index[i].rectsprite.sprite,
                    index[i].vecto.twof);
                if (index[i].varint.j == 200)
                    index[i].varint.pause = 1;
            }
            if (index[i].varint.pause == 1) {
                index[i].varint.j--;
                index[i].vecto.twof.x += 0.10;
                sfSprite_setPosition(index[i].rectsprite.sprite,
                    index[i].vecto.twof);
                if (index[i].varint.j == 0)
                    index[i].varint.pause = 0;
            }
            sfClock_restart(index[i].evclock.clocktwo);
        }
}

void clock_button_up(index_s *index, int i)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        index[i].evclock.clock)) > 1) {
            if (index[1].varint.key == 0) {
                index[i].vecto.twof.y -= 0.15;
                sfSprite_setPosition(index[i].rectsprite.sprite,
                    index[i].vecto.twof);
                if (index[1].varint.jj == 250)
                    index[1].varint.key = 1;
            }
            if (index[1].varint.key == 1) {
                index[i].vecto.twof.y += 0.15;
                sfSprite_setPosition(index[i].rectsprite.sprite,
                    index[i].vecto.twof);
                if (index[1].varint.jj == 0)
                    index[1].varint.key = 0;
            }
            sfClock_restart(index[i].evclock.clock);
        }
}

void clock_gui(index_s *index)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        index[1].evclock.clock)) > 1) {
            if (index[1].varint.key == 0) {
                index[1].varint.jj++;
                index[1].vecto.twof.y -= 0.15;
                sfSprite_setPosition(index[1].rectsprite.sprite,
                    index[1].vecto.twof);
                if (index[1].varint.jj == 250)
                    index[1].varint.key = 1;
            }
            if (index[1].varint.key == 1) {
                index[1].varint.jj--;
                index[1].vecto.twof.y += 0.15;
                sfSprite_setPosition(index[1].rectsprite.sprite,
                    index[1].vecto.twof);
                if (index[1].varint.jj == 0)
                    index[1].varint.key = 0;
            }
            sfClock_restart(index[1].evclock.clock);
        }
}