/*
** EPITECH PROJECT, 2020
** clock_difficulty
** File description:
** clock_difficulty
*/

#include "my_defender.h"

void clock_difficulty_button(index_s *index)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        index[10].evclock.clock)) > 1) {
            if (index[1].varint.key == 0) {
                index[10].vecto.twof.y -= 0.15;
                sfSprite_setPosition(index[10].rectsprite.sprite,
                    index[10].vecto.twof);
                if (index[1].varint.jj == 250)
                    index[1].varint.key = 1;
            }
            if (index[1].varint.key == 1) {
                index[10].vecto.twof.y += 0.15;
                sfSprite_setPosition(index[10].rectsprite.sprite,
                    index[10].vecto.twof);
                if (index[1].varint.jj == 0)
                    index[1].varint.key = 0;
            }
            sfClock_restart(index[10].evclock.clock);
        }
}