##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

NAME	=	my_defender

SRC	=	src/main.c	\
		src/menu/initialisation_menu.c	\
		src/menu/sprite_menu/menu_sprite_one.c	\
		src/menu/sprite_menu/menu_sprite_two.c	\
		src/menu/sprite_menu/menu_sprite_three.c	\
		src/menu/event_menu/menu_events_one.c	\
		src/menu/event_menu/menu_events_two.c	\
		src/menu/event_menu/menu_events_three.c	\
		src/menu/draw_sprites_menu/menu_draw_sprites_one.c	\
		src/menu/draw_sprites_menu/menu_draw_sprites_two.c	\
		src/menu/menu.c	\
		src/menu/chain_list_menu.c	\
		src/menu/clock_menu/clock_particle_menu.c	\
		src/menu/clock_menu/clock_particle_menu_two.c	\
		src/menu/clock_menu/clock_particle_menu_three.c	\
		src/menu/clock_menu/clock_gui.c	\
		src/menu/clock_menu/clock_option.c	\
		src/menu/clock_menu/clock_difficulty.c	\
		src/game/game.c	\
		src/game/initialisation_game.c	\
		src/game/sprite_game/sprite_game_one.c	\
		src/game/sprite_game/sprite_game_two.c	\
		src/game/sprite_game/sprite_game_three.c	\
		src/game/event_game/event_game_one.c	\
		src/game/draw_sprites_game/draw_game_one.c	\
		src/game/draw_sprites_game/draw_game_two.c	\
		src/game/draw_sprites_game/draw_game_three.c	\
		src/game/clock_game/clock_game_cloud.c	\
		src/game/chain_list/chain_list.c	\
		src/game/chain_list/chain_pig.c	\
		src/game/chain_list/chain_hover_tower.c	\
		src/game/chain_list/free_casejj_one.c	\
		src/game/clock_game/clock_pig.c	\
		src/game/event_game/event_hover.c	\
		src/menu/event_menu/extend_event_wait.c	\
		src/game/sprite_game/sprite_pause_one.c	\
		src/game/sprite_game/sprite_pause_two.c	\
		src/game/pause/draw_pause.c	\
		src/game/pause/clock_gui_pause.c	\
		src/game/pause/clock_setting_pause.c	\
		src/game/pause/event_pause.c	\
		src/game/pause/event_vol_pause.c	\
		src/game/event_game/extend_event_hover.c	\
		src/game/chain_list/create_case_tower.c	\
		src/game/draw_sprites_game/draw_game_four.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -I./include -g3

# LDFLAGS = -lasan


all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib re
	gcc -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio lib/libmy

clean:
	rm -f $(OBJ)

fclean: clean
	make -C lib/ fclean
	rm -f $(NAME)

re: fclean all