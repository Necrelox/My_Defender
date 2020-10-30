/*
** EPITECH PROJECT, 2020
** menu_events_three
** File description:
** menu_events_three
*/

#include "my_defender.h"

void event_easy_button(index_s *index)
{
    index[10].vecto.twoff = sfSprite_getPosition(index[10].rectsprite.sprite);
    index[0].vecto.twoi = sfMouse_getPositionRenderWindow(
        index[0].wintex.window);

    if (index[0].vecto.twoi.x >= index[10].vecto.twof.x + 125
        && index[0].vecto.twoi.x <= index[10].vecto.twof.x + 220
        && index[0].vecto.twoi.y >= index[10].vecto.twof.y + 50
        && index[0].vecto.twoi.y <= index[10].vecto.twof.y + 100) {
            if (index[10].rectsprite.rect.left < 299)
                index[10].rectsprite.rect.left += 299;
            if (index[0].evclock.event.type == sfEvtMouseButtonPressed
                && index[0].evclock.event.key.code == sfMouseLeft) {
                    index[0].varint.scene = 2;
                    index[0].varint.i = 0;
                }
        }
    else {
        index[10].rectsprite.rect.left = 0;
    }
}