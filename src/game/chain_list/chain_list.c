/*
** EPITECH PROJECT, 2020
** chain_list_cloud
** File description:
** chain_list_cloud
*/

#include "my_defender.h"

void create_case_game(index_s **game, int x, int y)
{
    index_s *newcase = malloc(sizeof(index_s));

    newcase->vecto.twof.x = x;
    newcase->vecto.twof.y = y;
    newcase->rectsprite.sprite = sfSprite_create();
    newcase->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/pos.png", NULL);
    sfSprite_setPosition(newcase->rectsprite.sprite,
        newcase->vecto.twof);
    while (game[3]->next != NULL)
        game[3] = game[3]->next;
    game[3]->next = newcase;
    newcase->next = NULL;
    newcase->prev = game[3];
    newcase->first = game[3]->first;
}

void prepare_case(index_s **game)
{
    create_case_game(game, 400, 375);
    create_case_game(game, 100, 375);
    create_case_game(game, 1050, 575);
    create_case_game(game, 1050, 575);
    create_case_game(game, 1750, 575);
    create_case_game(game, 1750, 375);
    create_case_game(game, 1750, 875);
    create_case_game(game, 750, 775);
    create_case_game(game, 1300, 875);
    create_case_game(game, 850, 100);
    create_case_game(game, 1150, 100);
}