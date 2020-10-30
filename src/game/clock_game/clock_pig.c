/*
** EPITECH PROJECT, 2020
** clock_pig
** File description:
** clock_pig
*/

#include "my_defender.h"

void clock_move_pig(index_s **game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[4]->evclock.clocktwo)) > 1) {
            if (game[4]->varint.rand == 0)
                game[4]->vecto.twof.x += 2;
            if (game[4]->vecto.twof.x < 950 && game[4]->varint.rand == 1)
                game[4]->vecto.twof.x += 2;
            if (game[4]->vecto.twof.x >= 950 && game[4]->varint.rand == 1
            && game[4]->vecto.twof.y < 750) {
                game[4]->vecto.twof.y += 2;
                game[4]->rectsprite.rect.top = 20;
            }
            if (game[4]->vecto.twof.y >= 750 && game[4]->varint.rand == 1) {
                game[4]->vecto.twof.x += 2;
                game[4]->rectsprite.rect.top = 150;
            }

            sfClock_restart(game[4]->evclock.clocktwo);
        }
    sfSprite_setPosition(game[4]->rectsprite.sprite,
        game[4]->vecto.twof);
}

void clock_animated_rigt_pig(index_s **game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        game[4]->evclock.clock)) > 200) {
            game[4]->rectsprite.rect.left += 47;
            if (game[4]->rectsprite.rect.left > 389)
                game[4]->rectsprite.rect.left = 295;
            sfClock_restart(game[4]->evclock.clock);
        }
}