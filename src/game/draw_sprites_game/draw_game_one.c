/*
** EPITECH PROJECT, 2020
** draw_game_one
** File description:
** draw_game_one
*/

#include "my_defender.h"

void draw_pig(index_s **game)
{
    index_s *save = game[4]->first;
    for (; game[4]->next != NULL; game[4] = game[4]->next);
    for (; game[4]->prev != NULL; game[4] = game[4]->prev) {
        sfSprite_setTexture(game[4]->rectsprite.sprite,
            game[4]->wintex.texture, sfTrue);
        sfSprite_setTextureRect(game[4]->rectsprite.sprite,
            game[4]->rectsprite.rect);
        sfRenderWindow_drawSprite(game[0]->wintex.window,
            game[4]->rectsprite.sprite, NULL);
        if (game[0]->varint.pause == 0) {
            game[15]->varint.brak = 0;
            clock_animated_rigt_pig(game);
            clock_move_pig(game);
        }
    }
    game[4] = save;
}

void draw_position(index_s **game)
{
    index_s *save = game[3]->first;

    for (; game[3] != NULL; game[3] = game[3]->next){
        sfSprite_setTexture(game[3]->rectsprite.sprite,
        game[3]->wintex.texture, sfTrue);
        sfRenderWindow_drawSprite(game[0]->wintex.window
            , game[3]->rectsprite.sprite, NULL);
    }
    game[3] = save;
}

void draw_cloud(index_s **game)
{
    sfSprite_setPosition(game[1]->rectsprite.sprite, game[1]->vecto.twof);
    sfSprite_setTexture(game[1]->rectsprite.sprite,
        game[1]->wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0]->wintex.window,
        game[1]->rectsprite.sprite, NULL);
    if (game[0]->varint.pause == 0) {
        clock_cloud_one(game);
    }
    sfSprite_setPosition(game[2]->rectsprite.sprite, game[2]->vecto.twof);
    sfSprite_setTexture(game[2]->rectsprite.sprite,
        game[2]->wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0]->wintex.window,
        game[2]->rectsprite.sprite, NULL);
    if (game[0]->varint.pause == 0) {
        clock_cloud_two(game);
    }
}

void draw_wall(index_s **game)
{
    sfRenderWindow_display(game[0]->wintex.window);
    sfSprite_setTexture(game[0]->rectsprite.sprite,
            game[0]->wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0]->wintex.window,
            game[0]->rectsprite.sprite, NULL);
}