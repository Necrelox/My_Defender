/*
** EPITECH PROJECT, 2020
** clock_setting_pause
** File description:
** clock_setting_pasue
*/

#include "my_defender.h"

void set_pos_all_setting_pause(index_s **game)
{
    sfSprite_setPosition(game[18]->rectsprite.sprite,
        game[18]->vecto.twof);
    sfSprite_setPosition(game[19]->rectsprite.sprite,
        game[19]->vecto.twof);
    sfText_setPosition(game[20]->texfont.text,
        game[20]->vecto.twof);
}

void clock_setting_volume_pause(index_s **game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[18]->evclock.clock)) > 1) {
            if (game[12]->varint.key == 0) {
                game[18]->vecto.twof.y -= 0.15, game[19]->vecto.twof.y -= 0.15;
                game[20]->vecto.twof.y -= 0.15;
                if (game[12]->varint.jj == 250)
                    game[12]->varint.key = 1;
            }
            if (game[12]->varint.key == 1) {
                game[18]->vecto.twof.y += 0.15, game[19]->vecto.twof.y += 0.15;
                game[20]->vecto.twof.y += 0.15;
                if (game[12]->varint.jj == 0)
                    game[12]->varint.key = 0;
            }
            sfClock_restart(game[18]->evclock.clock);
        }
    set_pos_all_setting_pause(game);
}