/*
** EPITECH PROJECT, 2020
** draw_sprites_one
** File description:
** draw_sprites_one
*/

#include "my_defender.h"

void draw_setting_sound(index_s *index)
{
    if (index[0].varint.option == 1) {
        sfSprite_setTexture(index[5].rectsprite.sprite,
            index[5].wintex.texture, sfTrue);
        sfRenderWindow_drawSprite(index[0].wintex.window,
            index[5].rectsprite.sprite, NULL);
        sfSprite_setTexture(index[6].rectsprite.sprite,
            index[6].wintex.texture, sfTrue);
        sfSprite_setTextureRect(index[6].rectsprite.sprite,
            index[6].rectsprite.rect);
        sfRenderWindow_drawSprite(index[0].wintex.window,
            index[6].rectsprite.sprite, NULL);
        sfRenderWindow_drawText(index[0].wintex.window, index[7].texfont.text
            , NULL);
        clock_setting_volume(index);
    }
}

void draw_chain_particle(index_s *index, index_s *chain)
{
    chain = chain->next;
    for (; chain->next != NULL; chain = chain->next) {
        sfSprite_setPosition(chain->rectsprite.sprite, chain->vecto.twof);
        sfSprite_setTexture(chain->rectsprite.sprite,
            chain->wintex.texture, sfTrue);
        sfRenderWindow_drawSprite(index[0].wintex.window,
            chain->rectsprite.sprite, NULL);
        move_up_particle(chain);
        set_scale_particle(chain);
        move_rotate_particle(chain);
    }
    chain = chain->first;
}

void draw_buttons(index_s *index)
{
    int i = 2;

    while (i <= 4 && index[0].varint.option == 0) {
        sfSprite_setTexture(index[i].rectsprite.sprite,
            index[i].wintex.texture, sfTrue);
        sfSprite_setTextureRect(index[i].rectsprite.sprite,
            index[i].rectsprite.rect);
        sfRenderWindow_drawSprite(index[0].wintex.window,
            index[i].rectsprite.sprite, NULL);
        clock_button_up(index, i);
        clock_button_side(index, i);
        sfSprite_setPosition(index[i].rectsprite.sprite,
        index[i].vecto.twof);
        i++;
    }
}

void draw_sprite_gui(index_s *index)
{
    sfSprite_setTexture(index[1].rectsprite.sprite,
        index[1].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(index[0].wintex.window,
        index[1].rectsprite.sprite, NULL);
    clock_gui(index);
}

void draw_sprite_wall(index_s *index)
{
    sfSprite_setTexture(index[0].rectsprite.sprite,
        index[0].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(index[0].wintex.window,
        index[0].rectsprite.sprite, NULL);
}