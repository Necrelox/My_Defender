/*
** EPITECH PROJECT, 2020
** extend_event_hover
** File description:
** extend_event_hover
*/

#include "my_defender.h"

void extend_tower_one(index_s **game)
{
    if (game[0]->evclock.event.type == sfEvtMouseButtonPressed
        && game[0]->evclock.event.key.code == sfMouseLeft
        && game[0]->varint.x == 0) {
            game[0]->varint.x = 1;
            if (game[0]->varint.y == 0) {
                create_case_towerone(game);
                game[0]->varint.y = 1;
            }
        }
}