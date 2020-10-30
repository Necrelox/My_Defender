/*
** EPITECH PROJECT, 2020
** draw_game_four
** File description:
** draw_game_four
*/

#include "my_defender.h"

void draw_move_tower(index_s **game)
{
    int i = 6;
    for (;i < 7; i++){
        index_s *save = game[i]->first;
        for (; game[i] != NULL; game[i] = game[i]->next) {
            if (game[i]->varint.jj == 3) {
                sfSprite_setTexture(game[i]->rectsprite.sprite,
                game[i]->wintex.texture, sfTrue);
                sfSprite_setTextureRect(game[i]->rectsprite.sprite
                , game[i]->rectsprite.rect);
                sfRenderWindow_drawSprite(game[0]->wintex.window,
                game[i]->rectsprite.sprite, NULL);
            }
        }
        game[i] = save;
    }
}