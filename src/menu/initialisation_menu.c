/*
** EPITECH PROJECT, 2020
** initialisation
** File description:
** initialisation
*/

#include "my_defender.h"

void init_menu_one(void)
{
    index_s index[11];
    index_s *chain = create_x_particles();

    index[0] = wallpaper();
    index[1] = gui_menu();
    index[2] = button_play();
    index[3] = button_option();
    index[4] = button_quit();
    index[5] = barre_setting();
    index[6] = cursor_setting();
    index[7] = music_volume_text();
    index[8] = button_back();
    index[9] = level_icon();
    index[10] = button_easy();
    sfMusic_setVolume(index[0].audio.music, 50);

    menu(index, chain);
}