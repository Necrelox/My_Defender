/*
** EPITECH PROJECT, 2020
** chain_pig
** File description:
** chain_pig
*/

#include "my_defender.h"

void extend_set_case(index_s *newcase)
{
    newcase->evclock.clock = sfClock_create();
    newcase->evclock.clocktwo = sfClock_create();
    newcase->rectsprite.rect.height = 70;
    newcase->rectsprite.rect.width = 35;
    newcase->rectsprite.rect.left = 295;
    newcase->rectsprite.rect.top = 150;
}

void create_case_pig(index_s **game, int x, int y)
{
    index_s *newcase = malloc(sizeof(*newcase));

    extend_set_case(newcase);
    newcase->varint.rand = rand() % 2;
    newcase->varint.rand = rand() % 2;
    newcase->rectsprite.sprite = sfSprite_create();
    newcase->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/monster.png", NULL);
    sfTexture_setSmooth(newcase->wintex.texture, sfTrue);
    newcase->vecto.twof.x = x;
    newcase->vecto.twof.y = y;
    sfSprite_setPosition(game[4]->rectsprite.sprite,
        game[4]->vecto.twof);
    while (game[4]->next != NULL)
        game[4] = game[4]->next;
    game[4]->next = newcase;
    newcase->next = NULL, newcase->prev = game[4];
    newcase->first = game[4]->first;
}

void create_wave_one(index_s **game)
{
    int x = 10, y = 250, i = 40;

    for (; i > 0; i--) {
        x -= 30;
        create_case_pig(game, x, y);
    }
}