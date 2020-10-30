/*
** EPITECH PROJECT, 2020
** event_hover
** File description:
** event_hover
*/

#include "my_defender.h"

void hover_tower_one_gui(index_s **game)
{
    static int test = 0;
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[6]->vecto.twof.x + 15
        && game[0]->vecto.twoi.x <= game[6]->vecto.twof.x + 100
        && game[0]->vecto.twoi.y >= game[6]->vecto.twof.y - 15
        && game[0]->vecto.twoi.y <= game[6]->vecto.twof.y + 60) {
            if (test == 0)
            create_case_tower_one(game);
        test = 1;
        draw_tower_one_levels(game);
        extend_tower_one(game);
        }
    else {
        free_jj_one(game[6]);
        test = 0;
    }
}

void hover_tower_two_gui(index_s **game)
{
    static int test = 0;
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[7]->vecto.twof.x + 15
        && game[0]->vecto.twoi.x <= game[7]->vecto.twof.x + 80
        && game[0]->vecto.twoi.y >= game[7]->vecto.twof.y - 15
        && game[0]->vecto.twoi.y <= game[7]->vecto.twof.y + 60) {
            if (test == 0)
                create_case_tower_two(game);
            test = 1;
            draw_tower_two_levels(game);
        }
    else {
            free_jj_one(game[7]);
            test = 0;
    }
}

void hover_tower_three_gui(index_s **game)
{
    static int test = 0;
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[8]->vecto.twof.x + 15
        && game[0]->vecto.twoi.x <= game[8]->vecto.twof.x + 100
        && game[0]->vecto.twoi.y >= game[8]->vecto.twof.y - 25
        && game[0]->vecto.twoi.y <= game[8]->vecto.twof.y + 60) {
            if (test == 0)
                create_case_tower_three(game);
            test = 1;
            draw_tower_three_levels(game);
        }
    else {
        free_jj_one(game[8]);
        test = 0;
    }
}

void hover_tower_four_gui(index_s **game)
{
    static int test = 0;
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[9]->vecto.twof.x
        && game[0]->vecto.twoi.x <= game[9]->vecto.twof.x + 100
        && game[0]->vecto.twoi.y >= game[9]->vecto.twof.y - 3
        && game[0]->vecto.twoi.y <= game[9]->vecto.twof.y + 100) {
            if (test == 0)
                create_case_tower_four(game);
            test = 1;
            draw_tower_four_levels(game);
        }
    else {
        free_jj_one(game[9]);
        test = 0;
    }
}

void hover_gui_tower(index_s **game)
{
    game[0]->vecto.twoi = sfMouse_getPositionRenderWindow(
        game[0]->wintex.window);

    if (game[0]->vecto.twoi.x >= game[5]->vecto.twof.x + 10
        && game[0]->vecto.twoi.x <= game[5]->vecto.twof.x + 655
        && game[0]->vecto.twoi.y >= game[5]->vecto.twof.y - 35
        && game[0]->vecto.twoi.y <= game[5]->vecto.twof.y + 90) {
            game[5]->rectsprite.rect.top = 193;
        }
    else
        game[5]->rectsprite.rect.top = 0;
}
