/*
** EPITECH PROJECT, 2020
** menu_sprite_three
** File description:
** menu_sprite_three
*/

#include "my_defender.h"

index_s button_easy(void)
{
    index_s *easy = malloc(sizeof(*easy));

    easy->evclock.clock = sfClock_create();
    easy->rectsprite.rect.height = 150;
    easy->rectsprite.rect.left = 0;
    easy->rectsprite.rect.top = 0;
    easy->rectsprite.rect.width = 340;
    easy->rectsprite.sprite = sfSprite_create();
    easy->vecto.twof.x = 775;
    easy->vecto.twof.y = 250;
    sfSprite_setPosition(easy->rectsprite.sprite,
        easy->vecto.twof);
    easy->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/easy.png", NULL);
    sfTexture_setSmooth(easy->wintex.texture, sfTrue);
    return (*easy);
}

index_s level_icon(void)
{
    index_s *icon = malloc(sizeof(*icon));

    icon->evclock.clock = sfClock_create();
    icon->rectsprite.sprite = sfSprite_create();
    icon->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/levels.png", NULL);
    icon->vecto.twof.x = 800;
    icon->vecto.twof.y = 285;
    sfSprite_setPosition(icon->rectsprite.sprite, icon->vecto.twof);
    sfTexture_setSmooth(icon->wintex.texture, sfTrue);
    return (*icon);
}

index_s button_back(void)
{
    index_s *back = malloc(sizeof(*back));
    back->rectsprite.rect.height = 150;
    back->rectsprite.rect.left = 0;
    back->rectsprite.rect.top = 0;
    back->rectsprite.rect.width = 340;
    back->vecto.twof.x = 700;
    back->vecto.twof.y = 650;
    back->rectsprite.sprite = sfSprite_create();
    back->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/back.png", NULL);
    sfSprite_setPosition(back->rectsprite.sprite, back->vecto.twof);
    sfTexture_setSmooth(back->wintex.texture, sfTrue);
    return (*back);
}