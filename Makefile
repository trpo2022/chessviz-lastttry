all: chess

chess: boardchess.c
	gcc boardchess.c -Wall -Werror -o chess