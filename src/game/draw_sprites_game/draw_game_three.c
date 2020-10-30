/*
** EPITECH PROJECT, 2020
** draw_game_three
** File description:
** draw_game_three
*/

#include "my_defender.h"

void draw_tower_one_levels(index_s **game)
{
    index_s *temp = game[6]->first;
    sfSprite_setTexture(game[10]->rectsprite.sprite,
        game[10]->wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0]->wintex.window
        , game[10]->rectsprite.sprite, NULL);
    for (;game[6] != NULL; game[6] = game[6]->next) {
        if (game[6]->varint.jj == 1) {
            sfSprite_setTexture(game[6]->rectsprite.sprite
            , game[6]->wintex.texture, sfTrue);
            sfRenderWindow_drawSprite(game[0]->wintex.window
            ,   game[6]->rectsprite.sprite, NULL);
        }
    }
    game[6] = temp;
}

void draw_tower_two_levels(index_s **game)
{
    index_s *temp = game[7]->first;
    sfSprite_setTexture(game[10]->rectsprite.sprite,
        game[10]->wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0]->wintex.window
        , game[10]->rectsprite.sprite, NULL);
    for (;game[7] != NULL; game[7] = game[7]->next) {
        if (game[7]->varint.jj == 1) {
            sfSprite_setTexture(game[7]->rectsprite.sprite
            , game[7]->wintex.texture, sfTrue);
            sfRenderWindow_drawSprite(game[0]->wintex.window
            ,   game[7]->rectsprite.sprite, NULL);
        }
    }
    game[7] = temp;
}

void draw_tower_three_levels(index_s **game)
{
    index_s *temp = game[8]->first;
    sfSprite_setTexture(game[10]->rectsprite.sprite,
        game[10]->wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0]->wintex.window
        , game[10]->rectsprite.sprite, NULL);
    for (;game[8] != NULL; game[8] = game[8]->next) {
        if (game[8]->varint.jj == 1) {
            sfSprite_setTexture(game[8]->rectsprite.sprite
            , game[8]->wintex.texture, sfTrue);
            sfRenderWindow_drawSprite(game[0]->wintex.window
            ,   game[8]->rectsprite.sprite, NULL);
        }
    }
    game[8] = temp;
}

void draw_tower_four_levels(index_s **game)
{
    index_s *temp = game[9]->first;
    sfSprite_setTexture(game[10]->rectsprite.sprite,
        game[10]->wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0]->wintex.window
        , game[10]->rectsprite.sprite, NULL);
    for (;game[9] != NULL; game[9] = game[9]->next) {
        if (game[9]->varint.jj == 1) {
            sfSprite_setTexture(game[9]->rectsprite.sprite
            , game[9]->wintex.texture, sfTrue);
            sfRenderWindow_drawSprite(game[0]->wintex.window
            ,   game[9]->rectsprite.sprite, NULL);
        }
    }
    game[9] = temp;
}