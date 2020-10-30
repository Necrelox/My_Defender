/*
** EPITECH PROJECT, 2020
** sprite_game_three
** File description:
** sprite_game_three
*/

#include "my_defender.h"

index_s *level_text_sprite(void)
{
    index_s *level = malloc(sizeof(*level));

    level->rectsprite.sprite = sfSprite_create();
    level->wintex.texture = sfTexture_createFromFile(
        "ressources/images/game/text_lvl.png", NULL);
    level->vecto.twof.x = 300;
    level->vecto.twof.y = 860;
    sfSprite_setPosition(level->rectsprite.sprite, level->vecto.twof);
    return (level);
}