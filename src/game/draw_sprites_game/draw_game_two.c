/*
** EPITECH PROJECT, 2020
** draw_game_two
** File description:
** draw_game_two
*/

#include "my_defender.h"

void draw_tower_one(index_s **game)
{
    sfSprite_setTexture(game[6]->rectsprite.sprite,
        game[6]->wintex.texture, sfTrue);
    sfSprite_setTextureRect(game[6]->rectsprite.sprite
        , game[6]->rectsprite.rect);
    sfRenderWindow_drawSprite(game[0]->wintex.window,
        game[6]->rectsprite.sprite, NULL);
    hover_tower_one_gui(game);
}

void draw_tower_two(index_s **game)
{
    sfSprite_setTexture(game[7]->rectsprite.sprite,
        game[7]->wintex.texture, sfTrue);
    sfSprite_setTextureRect(game[7]->rectsprite.sprite
        , game[7]->rectsprite.rect);
    sfRenderWindow_drawSprite(game[0]->wintex.window,
        game[7]->rectsprite.sprite, NULL);
    hover_tower_two_gui(game);

}

void draw_tower_three(index_s **game)
{
    sfSprite_setTexture(game[8]->rectsprite.sprite,
        game[8]->wintex.texture, sfTrue);
    sfSprite_setTextureRect(game[8]->rectsprite.sprite
        , game[8]->rectsprite.rect);
    sfRenderWindow_drawSprite(game[0]->wintex.window,
        game[8]->rectsprite.sprite, NULL);
    hover_tower_three_gui(game);

}

void draw_tower_four(index_s **game)
{
    sfSprite_setTexture(game[9]->rectsprite.sprite,
        game[9]->wintex.texture, sfTrue);
    sfSprite_setTextureRect(game[9]->rectsprite.sprite
        , game[9]->rectsprite.rect);
    sfRenderWindow_drawSprite(game[0]->wintex.window,
        game[9]->rectsprite.sprite, NULL);
    hover_tower_four_gui(game);

}

void draw_gui_tower(index_s **game)
{
    sfSprite_setTexture(game[5]->rectsprite.sprite,
        game[5]->wintex.texture, sfTrue);
    sfSprite_setTextureRect(game[5]->rectsprite.sprite
        , game[5]->rectsprite.rect);
    sfRenderWindow_drawSprite(game[0]->wintex.window
        , game[5]->rectsprite.sprite, NULL);
    hover_gui_tower(game);
}