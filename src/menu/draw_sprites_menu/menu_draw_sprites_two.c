/*
** EPITECH PROJECT, 2020
** menu_draw_sprite_two
** File description:
** menu_draw_sprites_two
*/

#include "my_defender.h"

void draw_difficulty(index_s *index)
{
    sfSprite_setTexture(index[10].rectsprite.sprite,
        index[10].wintex.texture, sfTrue);
    sfSprite_setTextureRect(index[10].rectsprite.sprite,
        index[10].rectsprite.rect);
    sfRenderWindow_drawSprite(index[0].wintex.window,
        index[10].rectsprite.sprite, NULL);
    event_easy_button(index);
    clock_difficulty_button(index);
}

void draw_icon_level(index_s *index)
{
    sfSprite_setTexture(index[9].rectsprite.sprite,
        index[9].wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(index[0].wintex.window,
        index[9].rectsprite.sprite, NULL);
    clock_icon_lvl(index);
}

void draw_button_back(index_s *index)
{
    if (index[0].varint.option == 1 || index[0].varint.scene == 1) {
        sfSprite_setTexture(index[8].rectsprite.sprite,
            index[8].wintex.texture, sfTrue);
        sfSprite_setTextureRect(index[8].rectsprite.sprite,
            index[8].rectsprite.rect);
        sfRenderWindow_drawSprite(index[0].wintex.window,
            index[8].rectsprite.sprite, NULL);
        event_button_back(index);
    }
}