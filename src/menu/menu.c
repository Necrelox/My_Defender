/*
** EPITECH PROJECT, 2020
** menu
** File description:
** menu
*/

#include "my_defender.h"

void parse_drawing_lvl_game(index_s *index)
{
    index[8].vecto.twof.x = 800;
    sfSprite_setPosition(index[8].rectsprite.sprite,
        index[8].vecto.twof);
    draw_button_back(index);
    draw_icon_level(index);
    wait_press_play(index);
}

void parse_drawing_menu(index_s *index, index_s *chain)
{
    if (index[0].varint.scene == 0 || index[0].varint.scene == 1)
    sfRenderWindow_display(index[0].wintex.window);
    draw_sprite_wall(index);
    draw_chain_particle(index, chain);
    draw_sprite_gui(index);
    if (index[0].varint.scene == 0) {
        draw_buttons(index);
        draw_setting_sound(index);
        draw_button_back(index);
        index[0].varint.i = 0;
        sfClock_restart(index[0].evclock.clock);
    }
    if (index[0].varint.scene == 1)
        parse_drawing_lvl_game(index);
}

void menu(index_s *index, index_s *chain)
{
    sfMusic_play(index[0].audio.music);
    sfMusic_setLoop(index[0].audio.music, sfTrue);
    while (sfRenderWindow_isOpen(index[0].wintex.window)) {
            parse_drawing_menu(index, chain);
            if (index[0].varint.scene == 2)
                break;
            while (sfRenderWindow_pollEvent(index[0].wintex.window,
                &index[0].evclock.event)) {
                    event_index_menu(index);
                }
        }
    if (index[0].varint.scene == 2) {
        sfMusic_destroy(index[0].audio.music);
        sfRenderWindow_close(index[0].wintex.window);
        init_game();
    }
}