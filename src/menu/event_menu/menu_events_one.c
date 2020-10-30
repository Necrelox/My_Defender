/*
** EPITECH PROJECT, 2020
** events_one
** File description:
** events_one
*/

#include "my_defender.h"

void event_button_play(index_s *index)
{
    index[2].vecto.twoff = sfSprite_getPosition(index[2].rectsprite.sprite);
    index[0].vecto.twoi = sfMouse_getPositionRenderWindow(
        index[0].wintex.window);

    if (index[0].vecto.twoi.x >= index[2].vecto.twof.x + 125
        && index[0].vecto.twoi.x <= index[2].vecto.twof.x + 220
        && index[0].vecto.twoi.y >= index[2].vecto.twof.y + 50
        && index[0].vecto.twoi.y <= index[2].vecto.twof.y + 100) {
            if (index[2].rectsprite.rect.left < 317)
                index[2].rectsprite.rect.left += 317;
            if (index[0].evclock.event.type == sfEvtMouseButtonPressed
                && index[0].evclock.event.key.code == sfMouseLeft) {
                    index[0].varint.scene = 1;
                    index[8].vecto.twof.y = 675;
                }
        }
    else {
        index[2].rectsprite.rect.left = 0;
    }
}

void event_button_option(index_s *index)
{
    index[3].vecto.twoff = sfSprite_getPosition(index[3].rectsprite.sprite);
    index[0].vecto.twoi = sfMouse_getPositionRenderWindow(
        index[0].wintex.window);

    if (index[0].vecto.twoi.x >= index[3].vecto.twof.x + 125
        && index[0].vecto.twoi.x <= index[3].vecto.twof.x + 220
        && index[0].vecto.twoi.y >= index[3].vecto.twof.y + 50
        && index[0].vecto.twoi.y <= index[3].vecto.twof.y + 100) {
            if (index[3].rectsprite.rect.left < 299)
                index[3].rectsprite.rect.left += 299;
            if (index[0].evclock.event.type == sfEvtMouseButtonPressed
                && index[0].evclock.event.key.code == sfMouseLeft) {
                    index[0].varint.option = 1;
                }
        }
    else {
        index[3].rectsprite.rect.left = 0;
    }
}

void event_button_quit(index_s *index)
{
    index[4].vecto.twoff = sfSprite_getPosition(index[4].rectsprite.sprite);
    index[0].vecto.twoi = sfMouse_getPositionRenderWindow(
        index[0].wintex.window);

    if (index[0].vecto.twoi.x >= index[4].vecto.twof.x + 125
        && index[0].vecto.twoi.x <= index[4].vecto.twof.x + 220
        && index[0].vecto.twoi.y >= index[4].vecto.twof.y + 50
        && index[0].vecto.twoi.y <= index[4].vecto.twof.y + 100) {
            if (index[4].rectsprite.rect.left < 317)
                index[4].rectsprite.rect.left += 317;
            if (index[0].evclock.event.type == sfEvtMouseButtonPressed
                && index[0].evclock.event.key.code == sfMouseLeft) {
                    sfMusic_destroy(index[0].audio.music);
                    sfRenderWindow_close(index[0].wintex.window);
                }
        }
    else {
        index[4].rectsprite.rect.left = 0;
    }
}

void event_window(index_s *index)
{
    if (index[0].evclock.event.type == sfEvtClosed) {
        sfMusic_destroy(index[0].audio.music);
        sfRenderWindow_close(index[0].wintex.window);
    }
}

void event_index_menu(index_s *index)
{
    if (index[0].varint.option == 0 && index[0].varint.scene == 0) {
        event_button_quit(index);
        event_button_option(index);
        event_button_play(index);
    }
    if (index[0].varint.option == 1) event_cursor_setting(index);
    if (index[6].varint.option == 1) extend_cursor_setting(index);
    event_window(index);
}