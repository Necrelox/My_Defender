/*
** EPITECH PROJECT, 2020
** initialisation_game
** File description:
** initialisation_game
*/

#include "my_defender.h"

void init_game(void)
{
    index_s *game[21];
    game[0] = map();
    game[1] = cloud();
    game[2] = cloud_two();
    game[3] = pos();
    prepare_case(game);
    game[4] = green_pig();
    create_wave_one(game);
    game[5] = gui_tower();
    game[6] = tower_one();
    game[7] = tower_two();
    game[8] = tower_three();
    game[9] = tower_four();
    game[10] = level_text_sprite();
    game[12] = gui_pause();
    game[13] = create_x_particles();
    game[14] = button_play_pause();
    game[15] = button_option_pause();
    game[16] = button_quit_pause();
    game[17] = button_back_pause();
    game[18] = barre_setting_pause();
    game[19] = cursor_setting_pause();
    game[20] = music_volume_text_pause();

    game_dis(game);
}
