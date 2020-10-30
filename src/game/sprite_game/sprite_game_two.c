/*
** EPITECH PROJECT, 2020
** sprite_game_two
** File description:
** sprite_game_two
*/

#include "my_defender.h"

index_s *tower_four(void)
{
    index_s *tower = malloc(sizeof(*tower));

    tower->next = NULL, tower->prev = NULL, tower->first = tower;
    tower->rectsprite.sprite = sfSprite_create();
    tower->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/tower_4.png", NULL);
    tower->rectsprite.rect.height = 160;
    tower->rectsprite.rect.width = 100;
    tower->rectsprite.rect.top = 0;
    tower->rectsprite.rect.left = 0;
    tower->vecto.twof.x = 1115;
    tower->vecto.twof.y = 890;
    tower->varint.jj = 0;
    sfSprite_setPosition(tower->rectsprite.sprite, tower->vecto.twof);
    return (tower);
}

index_s *tower_three(void)
{
    index_s *tower = malloc(sizeof(*tower));

    tower->next = NULL, tower->prev = NULL, tower->first = tower;
    tower->rectsprite.sprite = sfSprite_create();
    tower->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/tower_3.png", NULL);
    tower->rectsprite.rect.height = 115;
    tower->rectsprite.rect.width = 100;
    tower->rectsprite.rect.top = 0;
    tower->rectsprite.rect.left = 0;
    tower->vecto.twof.x = 990;
    tower->vecto.twof.y = 930;
    tower->varint.jj = 0;
    sfSprite_setPosition(tower->rectsprite.sprite, tower->vecto.twof);
    return (tower);
}

index_s *tower_two(void)
{
    index_s *tower = malloc(sizeof(*tower));

    tower->next = NULL, tower->prev = NULL, tower->first = tower;
    tower->rectsprite.sprite = sfSprite_create();
    tower->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/tower_2.png", NULL);
    tower->varint.jj = 0;
    tower->rectsprite.rect.height = 115;
    tower->rectsprite.rect.width = 100;
    tower->rectsprite.rect.top = 0;
    tower->rectsprite.rect.left = 0;
    tower->vecto.twof.x = 875;
    tower->vecto.twof.y = 930;
    sfSprite_setPosition(tower->rectsprite.sprite, tower->vecto.twof);
    return (tower);
}

index_s *tower_one(void)
{
    index_s *tower = malloc(sizeof(*tower));

    tower->next = NULL, tower->prev = NULL, tower->first = tower;
    tower->rectsprite.sprite = sfSprite_create();
    tower->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/tower_1.png", NULL);
    tower->rectsprite.rect.height = 115;
    tower->rectsprite.rect.width = 100;
    tower->rectsprite.rect.top = 0;
    tower->rectsprite.rect.left = 0;
    tower->vecto.twof.x = 735;
    tower->vecto.twof.y = 930;
    tower->varint.jj = 0;
    sfSprite_setPosition(tower->rectsprite.sprite, tower->vecto.twof);
    return (tower);
}

index_s *gui_tower(void)
{
    index_s *gui = malloc(sizeof(*gui));

    gui->rectsprite.sprite = sfSprite_create();
    gui->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/gui_tower.png", NULL);
    gui->vecto.twof.x = 600;
    gui->vecto.twof.y = 925;
    gui->rectsprite.rect.height = 180;
    gui->rectsprite.rect.width = 675;
    gui->rectsprite.rect.top = 0;
    gui->rectsprite.rect.left = 0;
    sfSprite_setPosition(gui->rectsprite.sprite, gui->vecto.twof);
    return (gui);
}