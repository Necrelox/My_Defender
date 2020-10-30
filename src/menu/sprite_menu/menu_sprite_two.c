/*
** EPITECH PROJECT, 2020
** menu_sprite_two
** File description:
** menu_sprite_two
*/

#include "my_defender.h"

index_s music_volume_text(void)
{
    index_s *text_music = malloc(sizeof(*text_music));

    text_music->texfont.text = sfText_create();
    text_music->texfont.color = sfColor_fromRGB(102, 41, 4);
    sfText_setColor(text_music->texfont.text,
        text_music->texfont.color);
    text_music->vecto.twoff.x = 1.35;
    text_music->vecto.twoff.y = 1.35;
    sfText_setScale(text_music->texfont.text, text_music->vecto.twoff);
    sfText_setString(text_music->texfont.text, "Music");
    text_music->texfont.font = sfFont_createFromFile("ressources/font/gui.ttf");
    text_music->vecto.twof.x = 950;
    text_music->vecto.twof.y = 340;
    sfText_setFont(text_music->texfont.text, text_music->texfont.font);
    sfText_setPosition(text_music->texfont.text,
        text_music->vecto.twof);
    return (*text_music);
}

index_s cursor_setting(void)
{
    index_s *cursor = malloc(sizeof(*cursor));

    cursor->varint.option = 0;
    cursor->rectsprite.rect.height = 85;
    cursor->rectsprite.rect.left = 0;
    cursor->rectsprite.rect.top = 0;
    cursor->rectsprite.rect.width = 35;
    cursor->vecto.twof.x = 960;
    cursor->vecto.twof.y = 400;
    cursor->rectsprite.sprite = sfSprite_create();
    cursor->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/reglage_cursor.png", NULL);
    sfSprite_setPosition(cursor->rectsprite.sprite,
        cursor->vecto.twof);
    sfTexture_setSmooth(cursor->wintex.texture, sfTrue);
    return (*cursor);
}

index_s barre_setting(void)
{
    index_s *barre = malloc(sizeof(*barre));

    barre->evclock.clock = sfClock_create();
    barre->rectsprite.sprite = sfSprite_create();
    barre->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/barre_reglage.png", NULL);
    barre->vecto.twof.x = 780;
    barre->vecto.twof.y = 425;
    barre->varint.key = 0;
    barre->varint.jj = 0;
    sfSprite_setPosition(barre->rectsprite.sprite,
    barre->vecto.twof);
    sfTexture_setSmooth(barre->wintex.texture, sfTrue);
    return (*barre);
}

index_s button_option(void)
{
    index_s *option = malloc(sizeof(*option));

    option->evclock.clock = sfClock_create();
    option->evclock.clocktwo = sfClock_create();
    option->varint.key = 0, option->varint.pause = 1, option->varint.jj = 0;
    option->varint.j = 200;
    option->rectsprite.rect.height = 150;
    option->rectsprite.rect.left = 0;
    option->rectsprite.rect.top = 0;
    option->rectsprite.rect.width = 340;
    option->wintex.texture = sfTexture_createFromFile(
        "ressources/images/menu/option.png", NULL);
    option->rectsprite.sprite = sfSprite_create();
    option->vecto.twof.y = 450;
    option->vecto.twof.x = 800;
    sfSprite_setPosition(option->rectsprite.sprite, option->vecto.twof);
    sfTexture_setSmooth(option->wintex.texture, sfTrue);
    return (*option);
}

index_s button_quit(void)
{
    index_s *quit = malloc(sizeof(*quit));

    quit->evclock.clock = sfClock_create();
    quit->evclock.clocktwo = sfClock_create();
    quit->varint.key = 0, quit->varint.pause = 0, quit->varint.jj = 0;
    quit->varint.j = 0;
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
    return (*quit);
}