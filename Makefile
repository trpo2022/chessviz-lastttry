all: chess.exe

chess.exe: boardchess.c
	gcc boardchess.c -Wall -Werror -o chess.exe