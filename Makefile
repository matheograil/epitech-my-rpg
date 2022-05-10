##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## MAKEFILE file.
##

PROJECT_FILES = src/*.c \
				src/init/*.c \
				src/menu_home/*.c \
				src/menu_settings/*.c \
				src/game/*.c \
				src/game_map/*.c \
				src/struct_game_map_objects/*.c \
				src/game_map_objects/*.c \
				src/struct_game_enemies/*.c \
				src/game_enemies/*.c \
				src/struct_game_characters/*.c \
				src/game_characters/*.c \
				src/game_weather/*.c \
				src/game_chat/*.c \
				src/game_hud/*.c \
				src/game_interface/*.c \
				src/struct_game_interface_inventory/*.c \
				src/game_interface_inventory/*.c \
				src/game_interface_skills/*.c \
				src/game_interface_help/*.c \
				src/game_settings/*.c \
				src/free/*.c

LIBRARY_FILES = lib/*.c

BINARY_FILE = my_rpg

BASIC_FLAGS = -Wno-deprecated -Werror -g3
CSFML_FLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:
	gcc $(PROJECT_FILES) $(LIBRARY_FILES) -o $(BINARY_FILE) $(BASIC_FLAGS) \
		$(CSFML_FLAGS)

clean:
	rm -f $(BINARY_FILE)

fclean: clean

re: fclean all
