/*
** EPITECH PROJECT, 2020
** sprite_pause_one
** File description:
** sprite_pause_one
*/

#include "my_defender.h"

index_s *button_quit_pause(void)
{
    index_s *quit = malloc(sizeof(*quit));

    quit->evclock.clock = sfClock_create();
    quit->evclock.clocktwo = sfClock_create();
    quit->varint.key = 0, quit->varint.pause = 0, quit->varint.jj = 0;
    quit->varint.j = 0;
    quit->varint.brak = 0;
    quit->rectsprite.rect.height = 150;
    quit->rectsprite.rect.left = 0;
    quit->rectsprite.rect.top = 0;
    quit->rectsprite.rect.width = 340;
    quit->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/quit.png", NULL);
    quit->rectsprite.sprite = sfSprite_create();
    quit->vecto.twof.y = 600;
    quit->vecto.twof.x = 800;
    sfSprite_setPosition(quit->rectsprite.sprite, quit->vecto.twof);
    sfTexture_setSmooth(quit->wintex.texture, sfTrue);
    return (quit);
}

index_s *button_play_pause(void)
{
    index_s *play = malloc(sizeof(*play));

    play->evclock.clock = sfClock_create();
    play->evclock.clocktwo = sfClock_create();
    play->varint.key = 0, play->varint.pause = 0, play->varint.jj = 0;
    play->varint.j = 0;
    play->rectsprite.rect.height = 150;
    play->rectsprite.rect.left = 0;
    play->rectsprite.rect.top = 0;
    play->rectsprite.rect.width = 340;
    play->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/play.png", NULL);
    play->rectsprite.sprite = sfSprite_create();
    play->vecto.twof.y = 300;
    play->vecto.twof.x = 800;
    sfSprite_setPosition(play->rectsprite.sprite, play->vecto.twof);
    sfTexture_setSmooth(play->wintex.texture, sfTrue);
    return (play);
}

index_s *gui_pause(void)
{
    index_s *gui = malloc(sizeof(*gui));

    gui->audio.music = sfMusic_createFromFile(
        "ressources/music/game/gamesic.ogg");
    gui->varint.y = 150;
    gui->evclock.clock = sfClock_create();
    gui->varint.key = 0, gui->varint.option = 0;
    gui->varint.jj = 0;
    gui->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/gui_menu.png", NULL);
    gui->rectsprite.sprite = sfSprite_create();
    gui->vecto.twof.y = 175;
    gui->vecto.twof.x = 700;
    sfSprite_setPosition(gui->rectsprite.sprite, gui->vecto.twof);
    sfTexture_setSmooth(gui->wintex.texture, sfTrue);
    return (gui);
}