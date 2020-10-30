/*
** EPITECH PROJECT, 2020
** create_case_tower
** File description:
** create_case_tower
*/

#include "my_defender.h"

void create_case_towerone(index_s **game)
{
    index_s *newcase = malloc(sizeof(*newcase));
    newcase->rectsprite.sprite = sfSprite_create();
    newcase->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/tower_1.png", NULL);
    newcase->rectsprite.rect.height = 115;
    newcase->rectsprite.rect.width = 100;
    newcase->rectsprite.rect.top = 0;
    newcase->rectsprite.rect.left = 0;
    newcase->varint.jj = 3;
    while (game[6]->next != NULL)
        game[6] = game[6]->next;
    game[6]->next = newcase;
    newcase->prev = game[6];
    newcase->first = game[6]->first;
    newcase->next = NULL;
}