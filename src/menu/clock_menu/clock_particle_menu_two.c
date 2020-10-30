/*
** EPITECH PROJECT, 2020
** clock_particle_menu_two
** File description:
** clock_menu_particle_two
*/

#include "my_defender.h"

void extend_scale_shrink(index_s *chain)
{
    chain->varint.rand == 0 ? chain->vecto.twoff.x -= 0.0010,
    chain->vecto.twoff.y -= 0.0010 :0;
    chain->varint.rand == 1 ? chain->vecto.twoff.x -= 0.0015,
    chain->vecto.twoff.y -= 0.0015 :0;
    chain->varint.rand == 2 ? chain->vecto.twoff.x -= 0.0020,
    chain->vecto.twoff.y -= 0.0020 :0;
}

void extend_scale_shrink_two(index_s *chain)
{
    chain->varint.rand == 3 ? chain->vecto.twoff.x -= 0.0025,
    chain->vecto.twoff.y -= 0.0025 :0;
    chain->varint.rand == 4 ? chain->vecto.twoff.x -= 0.0030,
    chain->vecto.twoff.y -= 0.0030 :0;
    chain->varint.rand == 5 ? chain->vecto.twoff.x -= 0.0035,
    chain->vecto.twoff.y -= 0.0035 :0;
}

void extend_scale_grow(index_s *chain)
{
    chain->varint.rand == 0 ? chain->vecto.twoff.x += 0.0010,
    chain->vecto.twoff.y += 0.0010 :0;
    chain->varint.rand == 1 ? chain->vecto.twoff.x += 0.0015,
    chain->vecto.twoff.y += 0.0015 :0;
    chain->varint.rand == 2 ? chain->vecto.twoff.x += 0.0020,
    chain->vecto.twoff.y += 0.0020 :0;
}

void extend_scale_grow_two(index_s *chain)
{
    chain->varint.rand == 3 ? chain->vecto.twoff.x += 0.0025,
    chain->vecto.twoff.y += 0.0025 :0;
    chain->varint.rand == 4 ? chain->vecto.twoff.x += 0.0030,
    chain->vecto.twoff.y += 0.0030 :0;
    chain->varint.rand == 5 ? chain->vecto.twoff.x += 0.0035,
    chain->vecto.twoff.y += 0.0035 :0;
}

void set_scale_particle(index_s *chain)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        chain->evclock.clocktwo)) > 1) {
            if (chain->varint.pause == 1) {
                extend_scale_shrink(chain);
                extend_scale_shrink_two(chain);
                chain->varint.i -= 0.5;
                chain->varint.i == 120 ? chain->varint.pause =  0 :0;
                sfSprite_setScale(chain->rectsprite.sprite,
                chain->vecto.twoff);
            }
            if (chain->varint.pause == 0) {
                extend_scale_grow(chain);
                extend_scale_grow_two(chain);
                chain->varint.i += 0.5;
                chain->varint.i == 215 ? chain->varint.pause =  1 :0;
                sfSprite_setScale(chain->rectsprite.sprite,
                chain->vecto.twoff);
            }
            sfClock_restart(chain->evclock.clocktwo);
        }
}