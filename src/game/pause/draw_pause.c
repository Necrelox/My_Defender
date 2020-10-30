/*
** EPITECH PROJECT, 2020
** draw_pause
** File description:
** draw_pause
*/

#include "my_defender.h"

void draw_setvol_pause(index_s **game)
{
        sfSprite_setTexture(game[18]->rectsprite.sprite,
            game[18]->wintex.texture, sfTrue);
        sfRenderWindow_drawSprite(game[0]->wintex.window,
            game[18]->rectsprite.sprite, NULL);
        sfSprite_setTexture(game[19]->rectsprite.sprite,
            game[19]->wintex.texture, sfTrue);
        sfSprite_setTextureRect(game[19]->rectsprite.sprite,
            game[19]->rectsprite.rect);
        sfRenderWindow_drawSprite(game[0]->wintex.window,
            game[19]->rectsprite.sprite, NULL);
        sfRenderWindow_drawText(game[0]->wintex.window, game[20]->texfont.text
            , NULL);
        clock_setting_volume_pause(game);
}

void draw_settings_pause(index_s **game)
{
    if (game[15]->varint.brak == 1) {
        sfSprite_setTexture(game[17]->rectsprite.sprite
            , game[17]->wintex.texture, sfTrue);
        sfSprite_setTextureRect(game[17]->rectsprite.sprite
        , game[17]->rectsprite.rect);
        sfRenderWindow_drawSprite(game[0]->wintex.window
            , game[17]->rectsprite.sprite, NULL);
        event_button_back_pause(game);
        clock_button_up2_pause(game);
        draw_setvol_pause(game);
    }
}

void draw_play_pause(index_s **game)
{
    int i = 14;

    if (game[15]->varint.brak == 0) {
        for (;i < 17; i++) {
            sfSprite_setTexture(game[i]->rectsprite.sprite
                , game[i]->wintex.texture, sfTrue);
            sfSprite_setTextureRect(game[i]->rectsprite.sprite
            , game[i]->rectsprite.rect);
            sfRenderWindow_drawSprite(game[0]->wintex.window
                , game[i]->rectsprite.sprite, NULL);
            clock_button_side_pause(game, i);
            clock_button_up_pause(game, i);
        }
        event_button_play_pause(game);
        event_button_option_pause(game);
        event_button_quit_pause(game);
    }
}

void draw_particle_pause(index_s **game)
{
    game[13] = game[13]->next;
    for (; game[13]->next != NULL; game[13] = game[13]->next) {
        sfSprite_setPosition(game[13]->rectsprite.sprite, game[13]->vecto.twof);
        sfSprite_setTexture(game[13]->rectsprite.sprite,
            game[13]->wintex.texture, sfTrue);
        sfRenderWindow_drawSprite(game[0]->wintex.window,
            game[13]->rectsprite.sprite, NULL);
        move_up_particle(game[13]);
        set_scale_particle(game[13]);
        move_rotate_particle(game[13]);
    }
    game[13] = game[13]->first;
}

void draw_gui_pause(index_s **game)
{
    draw_particle_pause(game);
    sfSprite_setTexture(game[12]->rectsprite.sprite,
        game[12]->wintex.texture, sfTrue);
    sfRenderWindow_drawSprite(game[0]->wintex.window,
        game[12]->rectsprite.sprite, NULL);
    clock_gui_pause(game);
    draw_play_pause(game);
    draw_settings_pause(game);
}