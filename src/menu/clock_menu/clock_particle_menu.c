/*
** EPITECH PROJECT, 2020
** clock_particle_menu
** File description:
** clock_particle_menu
*/

#include "my_defender.h"

void extend_move_up_particle(index_s *chain)
{
    chain->varint.rand == 0 ? chain->vecto.twof.y -= 0.25 :0;
    chain->varint.rand == 1 ? chain->vecto.twof.y -= 0.30 :0;
    chain->varint.rand == 2 ? chain->vecto.twof.y -= 0.35 :0;
    chain->varint.rand == 3 ? chain->vecto.twof.y -= 0.40 :0;
    chain->varint.rand == 4 ? chain->vecto.twof.y -= 0.45 :0;
    chain->varint.rand == 5 ? chain->vecto.twof.y -= 0.50 :0;
}

void move_up_particle(index_s *chain)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        chain->evclock.clock)) > 1) {
            if (chain->vecto.twof.y != -40)
                extend_move_up_particle(chain);
            if (chain->vecto.twof.y == -40) {
                chain->vecto.twof.y = 1080 + rand() % 50;
                chain->vecto.twof.x = (rand() % 1920) + 5;
                chain->varint.rand = rand() % 6;
            }
            sfSprite_setPosition(chain->rectsprite.sprite, chain->vecto.twof);
            sfClock_restart(chain->evclock.clock);
        }
}