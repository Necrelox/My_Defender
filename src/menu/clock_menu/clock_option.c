/*
** EPITECH PROJECT, 2020
** clock_option
** File description:
** clock_option
*/

#include "my_defender.h"

void set_pos_all_setting(index_s *index)
{
    sfSprite_setPosition(index[5].rectsprite.sprite,
        index[5].vecto.twof);
    sfSprite_setPosition(index[6].rectsprite.sprite,
        index[6].vecto.twof);
    sfText_setPosition(index[7].texfont.text,
        index[7].vecto.twof);
    sfSprite_setPosition(index[8].rectsprite.sprite,
        index[8].vecto.twof);
}

void clock_setting_volume(index_s *index)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        index[5].evclock.clock)) > 1) {
            if (index[1].varint.key == 0) {
                index[5].vecto.twof.y -= 0.15, index[6].vecto.twof.y -= 0.15;
                index[7].vecto.twof.y -= 0.15, index[8].vecto.twof.y -= 0.15;
                if (index[1].varint.jj == 250)
                    index[1].varint.key = 1;
            }
            if (index[1].varint.key == 1) {
                index[5].vecto.twof.y += 0.15, index[6].vecto.twof.y += 0.15;
                index[7].vecto.twof.y += 0.15, index[8].vecto.twof.y += 0.15;
                if (index[1].varint.jj == 0)
                    index[1].varint.key = 0;
            }
            sfClock_restart(index[5].evclock.clock);
        }
    set_pos_all_setting(index);
}