/*
** EPITECH PROJECT, 2020
** sprite_game_one
** File description:
** sprite_game_one
*/

#include "my_defender.h"

index_s *green_pig(void)
{
    index_s *pig = malloc(sizeof(*pig));

    pig->next = NULL, pig->prev = NULL, pig->first = pig;
    pig->evclock.clock = sfClock_create();
    pig->evclock.clocktwo = sfClock_create();
    pig->rectsprite.rect.height = 70;
    pig->rectsprite.rect.width = 35;
    pig->rectsprite.rect.left = 295;
    pig->rectsprite.rect.top = 150;
    pig->varint.rand = rand() % 2;
    pig->rectsprite.sprite = sfSprite_create();
    pig->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/monster.png", NULL);
    pig->vecto.twof.x = 10;
    pig->vecto.twof.y = 250;
    sfSprite_setPosition(pig->rectsprite.sprite,
        pig->vecto.twof);
    sfTexture_setSmooth(pig->wintex.texture, sfTrue);
    return (pig);
}

index_s *pos(void)
{
    index_s *pos = malloc(sizeof(*pos));

    pos->next = NULL, pos->prev = NULL, pos->first = pos;
    pos->rectsprite.sprite = sfSprite_create();
    pos->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/pos.png", NULL);
    pos->vecto.twof.x = 750;
    pos->vecto.twof.y = 375;
    sfSprite_setPosition(pos->rectsprite.sprite,
        pos->vecto.twof);
    return (pos);
}

index_s *cloud_two(void)
{
    index_s *cloud = malloc(sizeof(*cloud));

    cloud->evclock.clock = sfClock_create();
    cloud->rectsprite.sprite = sfSprite_create();
    cloud->vecto.twof.x = 1920, cloud->vecto.twof.y = 0;
    sfSprite_setPosition(cloud->rectsprite.sprite,
        cloud->vecto.twof);
    cloud->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/3.png", NULL);
    sfTexture_setSmooth(cloud->wintex.texture, sfTrue);
    return (cloud);
}

index_s *cloud(void)
{
    index_s *cloud = malloc(sizeof(*cloud));

    cloud->evclock.clock = sfClock_create();
    cloud->rectsprite.sprite = sfSprite_create();
    cloud->vecto.twof.x = 0, cloud->vecto.twof.y = 0;
    sfSprite_setPosition(cloud->rectsprite.sprite,
        cloud->vecto.twof);
    cloud->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/3.png", NULL);
    sfTexture_setSmooth(cloud->wintex.texture, sfTrue);
    return (cloud);
}

index_s *map(void)
{   
    index_s *map = malloc(sizeof(*map));

    map->wintex.scale.bitsPerPixel = 8;
    map->wintex.scale.height = 1080;
    map->wintex.scale.width = 1920;
    map->varint.key = 0, map->varint.pause = 0;
    map->varint.x = 0, map->varint.y = 0;
    map->evclock.clock = sfClock_create();
    map->evclock.clocktwo = sfClock_create();
    map->evclock.clockthree = sfClock_create();
    map->wintex.window = sfRenderWindow_create(map->wintex.scale,
        "Fantaisy_defender", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(map->wintex.window, 60);
    map->audio.music = sfMusic_createFromFile(
        "ressources/music/game/gamesic.ogg");
    map->rectsprite.sprite = sfSprite_create();
    map->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/map.png", NULL);
    sfMusic_setVolume(map->audio.music, 50);
    return (map);
}