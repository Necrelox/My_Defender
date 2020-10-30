/*
** EPITECH PROJECT, 2020
** menu_event_two
** File description:
** menu_event_two
*/

#include "my_defender.h"

void event_button_back(index_s *index)
{
    index[8].vecto.twoff = sfSprite_getPosition(index[8].rectsprite.sprite);
    index[0].vecto.twoi = sfMouse_getPositionRenderWindow(
        index[0].wintex.window);

    if (index[0].vecto.twoi.x >= index[8].vecto.twof.x + 125
        && index[0].vecto.twoi.x <= index[8].vecto.twof.x + 220
        && index[0].vecto.twoi.y >= index[8].vecto.twof.y + 10
        && index[0].vecto.twoi.y <= index[8].vecto.twof.y + 100) {
            if (index[8].rectsprite.rect.left < 317)
                index[8].rectsprite.rect.left += 317;
            if (index[0].evclock.event.type == sfEvtMouseButtonPressed
                && index[0].evclock.event.key.code == sfMouseLeft) {
                    index[0].varint.option = 0, index[0].varint.scene = 0;
                    index[8].vecto.twof.x = 700, index[8].vecto.twof.y = 650;
                    index[0].varint.i = 0;
                }
        }
    else {
        index[8].rectsprite.rect.left = 0;
    }
}

void cursor_set_volume(index_s *index)
{
    float vol = (((index[6].vecto.twof.x = sfMouse_getPositionRenderWindow(
            index[0].wintex.window).x - 15) - 830) * 0.37005);
    sfMusic_setVolume(index[0].audio.music, vol);
}

void extend_cursor_setting(index_s *index)
{
    if (index[6].vecto.twof.x >= 820 && index[6].vecto.twof.x <= 1100) {
        index[6].vecto.twof.x = sfMouse_getPositionRenderWindow(
            index[0].wintex.window).x - 15;
        cursor_set_volume(index);
        sfSprite_setPosition(index[6].rectsprite.sprite,
            index[6].vecto.twof);
    }
    if (index[6].vecto.twof.x <= 830) {
        index[6].vecto.twof.x = 831;
        sfSprite_setPosition(index[6].rectsprite.sprite,
            index[6].vecto.twof);
        index[6].varint.option = 0;
    }
    if (index[6].vecto.twof.x >= 1090) {
        index[6].vecto.twof.x = 1089;
        sfSprite_setPosition(index[6].rectsprite.sprite,
            index[6].vecto.twof);
        index[6].varint.option = 0;
    }
}

void event_cursor_setting(index_s *index)
{
    index[6].vecto.twoff = sfSprite_getPosition(index[6].rectsprite.sprite);
    index[0].vecto.twoi = sfMouse_getPositionRenderWindow(
        index[0].wintex.window);

    if (index[0].vecto.twoi.x >= index[6].vecto.twof.x - 20
        && index[0].vecto.twoi.x <= index[6].vecto.twof.x + 60
        && index[0].vecto.twoi.y >= index[6].vecto.twof.y - 55
        && index[0].vecto.twoi.y <= index[6].vecto.twof.y + 55) {
            if (index[6].rectsprite.rect.left < 36)
                index[6].rectsprite.rect.left += 36;
            if (index[0].evclock.event.type == sfEvtMouseButtonPressed
                && index[0].evclock.event.key.code == sfMouseLeft) {
                    index[6].varint.option = 1;
                }
        }
    else {
        index[6].rectsprite.rect.left = 0;
        index[6].varint.option = 0;
    }
}