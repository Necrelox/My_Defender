/*
** EPITECH PROJECT, 2020
** clock_particle_menu_three
** File description:
** clock_particle_menu_three
*/

#include "my_defender.h"

void extend_rotate_particle(index_s *chain)
{
    chain->varint.rand == 0 ? chain->varint.jj -= 0.25 :0;
    chain->varint.rand == 1 ? chain->varint.jj += 0.30 :0;
    chain->varint.rand == 2 ? chain->varint.jj -= 0.35 :0;
    chain->varint.rand == 3 ? chain->varint.jj += 0.40 :0;
    chain->varint.rand == 4 ? chain->varint.jj -= 0.45 :0;
    chain->varint.rand == 5 ? chain->varint.jj += 0.50 :0;
}

void move_rotate_particle(index_s *chain)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        chain->evclock.clockthree)) > 1) {
            extend_rotate_particle(chain);
            sfSprite_setRotation(chain->rectsprite.sprite, chain->varint.jj);
            sfClock_restart(chain->evclock.clockthree);
        }
}