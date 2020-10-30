/*
** EPITECH PROJECT, 2020
** event_vo_pause
** File description:
** event_vol_pause
*/

#include "my_defender.h"

void cursor_set_volume_pause(index_s **game)
{
    float vol = (((game[19]->vecto.twof.x = sfMouse_getPositionRenderWindow(
            game[0]->wintex.window).x - 15) - 830) * 0.37005);
    sfMusic_setVolume(game[0]->audio.music, vol);
}

void extend_cursor_setting_pause(index_s **game)
{
    if (game[19]->vecto.twof.x >= 820 && game[19]->vecto.twof.x <= 1100) {
        game[19]->vecto.twof.x = sfMouse_getPositionRenderWindow(
            game[0]->wintex.window).x - 15;
        cursor_set_volume_pause(game);
        sfSprite_setPosition(game[19]->rectsprite.sprite,
            game[19]->vecto.twof);
    }
    if (game[19]->vecto.twof.x <= 830) {
        game[19]->vecto.twof.x = 831;
        sfSprite_setPosition(game[19]->rectsprite.sprite,
            game[19]->vecto.twof);
        game[19]->varint.option = 0;
    }
    if (game[19]->vecto.twof.x >= 1090) {
        game[19]->vecto.twof.x = 1089;
        sfSprite_setPosition(game[19]->rectsprite.sprite,
            game[19]->vecto.twof);
        game[19]->varint.option = 0;
    }
}

void event_cursor_setting_pause(index_s **game)
{
    game[19]->vecto.twoff = sfSprite_getPosition(game[19]->rectsprite.sprite);
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[19]->vecto.twof.x - 20
        && game[0]->vecto.twoi.x <= game[19]->vecto.twof.x + 60
        && game[0]->vecto.twoi.y >= game[19]->vecto.twof.y - 55
        && game[0]->vecto.twoi.y <= game[19]->vecto.twof.y + 55) {
            if (game[19]->rectsprite.rect.left < 36)
                game[19]->rectsprite.rect.left += 36;
            if (game[0]->evclock.event.type == sfEvtMouseButtonPressed
                && game[0]->evclock.event.key.code == sfMouseLeft) {
                    game[19]->varint.option = 1;
                }
        }
    else {
        game[19]->rectsprite.rect.left = 0;
        game[19]->varint.option = 0;
    }
}