/*
** EPITECH PROJECT, 2020
** chain_list_menu
** File description:
** chain_list_menu
*/

#include "my_defender.h"

void case_setup(index_s *newcase)
{
    newcase->rectsprite.sprite = sfSprite_create();
    newcase->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/particle.png", NULL);
    newcase->evclock.clock = sfClock_create();
    newcase->evclock.clocktwo = sfClock_create();
    newcase->evclock.clockthree = sfClock_create();
    newcase->varint.ii = 0;
    newcase->varint.jj = 0;
    newcase->varint.i = 0;
    newcase->vecto.twoff.x = 0;
    newcase->vecto.twoff.y = 0;
    newcase->varint.pause = 0;
    sfTexture_setSmooth(newcase->wintex.texture, sfTrue);
}

void create_case(index_s * chain, int x, int y)
{
    index_s *newcase = malloc(sizeof(*newcase));
    case_setup(newcase);
    newcase->vecto.twof.x = x;
    newcase->vecto.twof.y = y;
    newcase->varint.rand = rand() % 6;
    while (chain->next != NULL)
        chain = chain->next;
    chain->next = newcase;
    newcase->next = NULL;
    newcase->prev = chain;
    newcase->first = chain->first;
}

index_s *create_x_particles(void)
{
    index_s *chain = particle();
    int i = 0, x = 10, y = 500, random = 0, save = 0;
    for (; i < 5000; x += 70, i++) {
        if (x >= 1980)
            x = 10, y += 90;
        save = y;
        random = rand() % 6;
        random == 0 ? y += 20 : 0;
        random == 1 ? y += 30 : 0;
        random == 2 ? y += 40 : 0;
        random == 3 ? y += 50 : 0;
        random == 4 ? y += 60 : 0;
        random == 5 ? y += 70 : 0;
        create_case(chain, x, y);
        y = save;
    }
    return (chain);
}
