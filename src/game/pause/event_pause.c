/*
** EPITECH PROJECT, 2020
** event_pause
** File description:
** event_pause
*/

#include "my_defender.h"

void event_button_back_pause(index_s **game)
{
    game[17]->vecto.twoff = sfSprite_getPosition(game[17]->rectsprite.sprite);
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[17]->vecto.twof.x + 125
        && game[0]->vecto.twoi.x <= game[17]->vecto.twof.x + 220
        && game[0]->vecto.twoi.y >= game[17]->vecto.twof.y + 50
        && game[0]->vecto.twoi.y <= game[17]->vecto.twof.y + 100) {
            if (game[17]->rectsprite.rect.left < 317)
                game[17]->rectsprite.rect.left += 317;
            if (game[0]->evclock.event.type == sfEvtMouseButtonPressed
                && game[0]->evclock.event.key.code == sfMouseLeft) {
                    game[15]->varint.brak = 0;
                }
        }
    else {
        game[17]->rectsprite.rect.left = 0;
    }
}

void event_button_quit_pause(index_s **game)
{
    game[16]->vecto.twoff = sfSprite_getPosition(game[16]->rectsprite.sprite);
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[16]->vecto.twof.x + 125
        && game[0]->vecto.twoi.x <= game[16]->vecto.twof.x + 220
        && game[0]->vecto.twoi.y >= game[16]->vecto.twof.y + 50
        && game[0]->vecto.twoi.y <= game[16]->vecto.twof.y + 100) {
            if (game[16]->rectsprite.rect.left < 317)
                game[16]->rectsprite.rect.left += 317;
            if (game[0]->evclock.event.type == sfEvtMouseButtonPressed
                && game[0]->evclock.event.key.code == sfMouseLeft) {
                    game[16]->varint.brak = 1;
                }
        }
    else {
        game[16]->rectsprite.rect.left = 0;
    }
}

void event_button_option_pause(index_s **game)
{
    game[15]->vecto.twoff = sfSprite_getPosition(game[15]->rectsprite.sprite);
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[15]->vecto.twof.x + 125
        && game[0]->vecto.twoi.x <= game[15]->vecto.twof.x + 220
        && game[0]->vecto.twoi.y >= game[15]->vecto.twof.y + 50
        && game[0]->vecto.twoi.y <= game[15]->vecto.twof.y + 100) {
            if (game[15]->rectsprite.rect.left < 299)
                game[15]->rectsprite.rect.left += 299;
            if (game[0]->evclock.event.type == sfEvtMouseButtonPressed
                && game[0]->evclock.event.key.code == sfMouseLeft) {
                    game[15]->varint.brak = 1, game[0]->varint.option = 1;
                    game[19]->varint.option = 1;
                }
        }
    else {
        game[15]->rectsprite.rect.left = 0;
    }
}

void event_button_play_pause(index_s **game)
{
    game[14]->vecto.twoff = sfSprite_getPosition(game[14]->rectsprite.sprite);
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[14]->vecto.twof.x + 125
        && game[0]->vecto.twoi.x <= game[14]->vecto.twof.x + 220
        && game[0]->vecto.twoi.y >= game[14]->vecto.twof.y + 50
        && game[0]->vecto.twoi.y <= game[14]->vecto.twof.y + 100) {
            if (game[14]->rectsprite.rect.left < 317)
                game[14]->rectsprite.rect.left += 317;
            if (game[0]->evclock.event.type == sfEvtMouseButtonPressed
                && game[0]->evclock.event.key.code == sfMouseLeft) {
                    game[0]->varint.pause = 0;
                }
        }
    else {
        game[14]->rectsprite.rect.left = 0;
    }
}