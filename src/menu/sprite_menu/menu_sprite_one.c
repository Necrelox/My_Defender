/*
** EPITECH PROJECT, 2020
** sprite_conf_one
** File description:
** sprite_conf_one
*/

#include "my_defender.h"

index_s button_play(void)
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
    return (*play);
}

index_s *particle(void)
{
    index_s *particle = malloc(sizeof(*particle));

    particle->evclock.clock = sfClock_create();
    particle->evclock.clocktwo = sfClock_create();
    particle->evclock.clockthree = sfClock_create();
    particle->varint.ii = 0;
    particle->varint.pause = 0;
    particle->first = particle;
    particle->next = NULL;
    particle->prev = NULL;
    particle->varint.rand = 0;
    particle->rectsprite.sprite = sfSprite_create();
    particle->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/particle.png", NULL);
    particle->vecto.twof.y = 975;
    particle->vecto.twof.x = 55;
    sfSprite_setPosition(particle->rectsprite.sprite, particle->vecto.twof);
    sfTexture_setSmooth(particle->wintex.texture, sfTrue);
    return (particle);
}

index_s gui_menu(void)
{
    index_s *gui = malloc(sizeof(*gui));

    gui->varint.y = 150;
    gui->evclock.clock = sfClock_create();
    gui->varint.key = 0;
    gui->varint.jj = 0;
    gui->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/gui_menu.png", NULL);
    gui->rectsprite.sprite = sfSprite_create();
    gui->vecto.twof.y = 175;
    gui->vecto.twof.x = 700;
    sfSprite_setPosition(gui->rectsprite.sprite, gui->vecto.twof);
    sfTexture_setSmooth(gui->wintex.texture, sfTrue);
    return (*gui);
}

index_s wallpaper(void)
{
    index_s *wall = malloc(sizeof(*wall));

    wall->evclock.clock = sfClock_create();
    wall->wintex.scale.height = 1080;
    wall->wintex.scale.width = 1920;
    wall->wintex.scale.bitsPerPixel = 8;
    wall->varint.i = 0, wall->varint.option = 0;
    wall->varint.scene = 0, wall->varint.pause = 0;
    wall->wintex.window = sfRenderWindow_create(wall->wintex.scale,
        "Fantaisy_defender", sfDefaultStyle, NULL);
    wall->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/wall.jpg", NULL);
    wall->rectsprite.sprite = sfSprite_create();
    sfRenderWindow_setFramerateLimit(wall->wintex.window, 60);
    wall->audio.music = sfMusic_createFromFile(
        "ressources/music/menu/menusic.ogg");
    return (*wall);
}