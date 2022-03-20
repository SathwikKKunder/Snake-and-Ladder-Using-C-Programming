#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"

int main() {
	int player_size, seed;
	Player_info* player;
	int* position_on_board;

	//Seed for srand function in "rolling_die" function
	int* die_seed;  
	die_seed = &seed;

	srand(time(NULL)); //using srand to get random seed value each time the program is executed.
	*die_seed = rand(); //Intializing the seed for 'rolling_die' function with random number.

	printf("Enter no. of players\n");
	scanf("%d", &player_size);

	//dynamically allocating 'Player_info' structure,with size equal to the no. of players entered.
	player = (int*)malloc(player_size * sizeof(int)); 

	//Setting Board and players initial position.
	position_on_board = intialize_game(player, player_size);

	//Start Snake & ladder game.
	start_game(player, player_size, position_on_board, die_seed);

	return 0;
}