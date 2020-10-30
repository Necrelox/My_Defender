/*
** EPITECH PROJECT, 2020
** chain_hover_tower
** File description:
** chain_hover_tower
*/

#include "my_defender.h"

void create_case_tower_one(index_s **game)
{
    index_s *newcase = malloc(sizeof(*newcase));

    newcase->rectsprite.sprite = sfSprite_create();
    newcase->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/tower_1.png", NULL);
    newcase->vecto.twof.x = 275;
    newcase->vecto.twof.y = 960;
    sfSprite_setPosition(newcase ->rectsprite.sprite, newcase->vecto.twof);
    newcase->varint.jj = 1;
    while (game[6]->next != NULL)
        game[6] = game[6]->next;
    game[6]->next = newcase;
    newcase->prev = game[6];
    newcase->first = game[6]->first;
    newcase->next = NULL;
}

void create_case_tower_two(index_s **game)
{
    index_s *newcase = malloc(sizeof(*newcase));

    newcase->rectsprite.sprite = sfSprite_create();
    newcase->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/tower_2.png", NULL);
    newcase->vecto.twof.x = 295;
    newcase->vecto.twof.y = 960;
    sfSprite_setPosition(newcase ->rectsprite.sprite, newcase->vecto.twof);
    newcase->varint.jj = 1;
    while (game[7]->next != NULL)
        game[7] = game[7]->next;
    game[7]->next = newcase;
    newcase->prev = game[7];
    newcase->first = game[7]->first;
    newcase->next = NULL;
}

void create_case_tower_three(index_s **game)
{
    index_s *newcase = malloc(sizeof(*newcase));

    newcase->rectsprite.sprite = sfSprite_create();
    newcase->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/tower_3.png", NULL);
    newcase->vecto.twof.x = 285;
    newcase->vecto.twof.y = 960;
    sfSprite_setPosition(newcase ->rectsprite.sprite, newcase->vecto.twof);
    newcase->varint.jj = 1;
    while (game[8]->next != NULL)
        game[8] = game[8]->next;
    game[8]->next = newcase;
    newcase->prev = game[8];
    newcase->first = game[8]->first;
    newcase->next = NULL;
}

void create_case_tower_four(index_s **game)
{
    index_s *newcase = malloc(sizeof(*newcase));

    newcase->rectsprite.sprite = sfSprite_create();
    newcase->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/tower_4.png", NULL);
    newcase->vecto.twof.x = 295;
    newcase->vecto.twof.y = 935;
    sfSprite_setPosition(newcase ->rectsprite.sprite, newcase->vecto.twof);
    newcase->varint.jj = 1;
    while (game[9]->next != NULL)
        game[9] = game[9]->next;
    game[9]->next = newcase;
    newcase->prev = game[9];
    newcase->first = game[9]->first;
    newcase->next = NULL;
}