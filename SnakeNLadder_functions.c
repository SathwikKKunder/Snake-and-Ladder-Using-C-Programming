#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"


//'set_board' function updates the player position on the board after each move and calls 'display_board' function to display the board.
void set_board(Player_info* player, int* position_on_board, int player_no)
{
	int previous_position = player[player_no].previous_position;
	int current_position = player[player_no].current_position;

	//position pointer on the board corresponding to the previous position is intialized to '0'. 
	position_on_board[previous_position] = 0;
	//position pointer on the board corresponding to the current position is intialized to player number. 
	position_on_board[current_position] = player_no + 1;  //since player array starts from 0 (Ex. player[0]), hence '1' is added.

	//Displaying the board with the updated position pointers. 
	display_board(position_on_board);
}


//'display_board' displays the board to the player.
void display_board(int* position_on_board)
{ 
//L1,L2.....L8 stands for Ladders. Ladder foot or entry to the ladder is represented is Ladder_name(destination_position). Ex: L8(99) means Ladder 8 leads to position no.99.
// Ladder head or the ladder end is represented only by Ladder_name. Ex: if at position 91 there's L1, it means Ladder 1 leads to position 91.
//S1,S2.....S8 stands for snakes. snake's head is represented is Snake_name(destination_position). Ex: S7(19) means Snake 7 leads to position no.19.
//snake's tail is represented only by Snake_name. Ex: if at position 81 there's S1, it means Snake 1 leads to position 81.

	printf("\n______,______,______,______,______,______,______,______,______,______,\n");
	printf("WIN   |99    |98    |97    |96    |95    |94    |93    |92    |91    |\n");
	printf("      |L8    |      |S1(78)|      |S2(75)|      |      |      |L7    |\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[100], position_on_board[99], position_on_board[98], position_on_board[97], position_on_board[96], position_on_board[95], position_on_board[94], position_on_board[93], position_on_board[92], position_on_board[91]);

	printf("______,______,______,______,______,______,______,______,______,______,\n");
	printf("81    |82    |83    |84    |85    |86    |87    |88    |89    |90    |\n");
	printf("      |      |      |      |      |      |      |S3(24)|      |      |\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[81], position_on_board[82], position_on_board[83], position_on_board[84], position_on_board[85], position_on_board[86], position_on_board[87], position_on_board[88], position_on_board[89], position_on_board[90]);

	printf("______,______,______,______,______,______,______,______,______,______,\n");
	printf("80    |79    |78    |77    |76    |75    |74    |73    |72    |71    |\n");
	printf("L8(99)|      |S1    |      |      |S2    |S4(36)|      |L7(91)|      |\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[80], position_on_board[79], position_on_board[78], position_on_board[77], position_on_board[76], position_on_board[75], position_on_board[74], position_on_board[73], position_on_board[72], position_on_board[71]);

	printf("______,______,______,______,______,______,______,______,______,______,\n");
	printf("61    |62    |63    |64    |65    |66    |67    |68    |69    |70    |\n");
	printf("      |S5(18)|      |S6(60)|      |      |L6    |      |      |      |\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[61], position_on_board[62], position_on_board[63], position_on_board[64], position_on_board[65], position_on_board[66], position_on_board[67], position_on_board[68], position_on_board[69], position_on_board[70]);

	printf("______,______,______,______,______,______,______,______,______,______,\n");
	printf("60    |59    |58    |57    |56    |55    |54    |53    |52    |51    |\n");
	printf("S6    |      |      |      |      |      |      |      |      |      |\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[60], position_on_board[59], position_on_board[58], position_on_board[57], position_on_board[56], position_on_board[55], position_on_board[54], position_on_board[53], position_on_board[52], position_on_board[51]);

	printf("______,______,______,______,______,______,______,______,______,______,\n");
	printf("41    |42    |43    |44    |45    |46    |47    |48    |49    |50    |\n");
	printf("L4    |      |      |      |      |      |L6    |      |      |L6(67)|\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[41], position_on_board[42], position_on_board[43], position_on_board[44], position_on_board[45], position_on_board[46], position_on_board[47], position_on_board[48], position_on_board[49], position_on_board[50]);

	printf("______,______,______,______,______,______,______,______,______,______,\n");
	printf("40    |39    |38    |37    |36    |35    |34    |33    |32    |31    |\n");
	printf("      |      |L1    |      |S4    |      |      |      |      |      |\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[40], position_on_board[39], position_on_board[38], position_on_board[37], position_on_board[36], position_on_board[35], position_on_board[34], position_on_board[33], position_on_board[32], position_on_board[31]);

	printf("______,______,______,______,______,______,______,______,______,______,\n");
	printf("21    |22    |23    |24    |25    |26    |27    |28    |29    |30    |\n");
	printf("L4(41)|      |      |S3    |      |      |      |L5(28)|      |L3    |\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[21], position_on_board[22], position_on_board[23], position_on_board[24], position_on_board[25], position_on_board[26], position_on_board[27], position_on_board[28], position_on_board[29], position_on_board[30]);

	printf("______,______,______,______,______,______,______,______,______,______,\n");
	printf("20    |19    |18    |17    |16    |15    |14    |13    |12    |11    |\n");
	printf("      |      |S6    |      |      |      |L2    |      |      |      |\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[20], position_on_board[19], position_on_board[18], position_on_board[17], position_on_board[16], position_on_board[15], position_on_board[14], position_on_board[13], position_on_board[12], position_on_board[11]);

	printf("______,______,______,______,______,______,______,______,______,______,\n");
	printf("1     | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    |10    |\n");
	printf("L1(38)|      |      |L2(14)|      |      |      |L3(30)|      |      |\n");
	printf("____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|____ %d|\n", position_on_board[1], position_on_board[2], position_on_board[3], position_on_board[4], position_on_board[5], position_on_board[6], position_on_board[7], position_on_board[8], position_on_board[9], position_on_board[10]);

}


//'intialize_game' function initializes each players position and player position pointers on the board to '0' at begining of the game.
int* intialize_game(Player_info* player, int player_size)
{
	//Creating 100 position pointers initialized with '0's to be displayed on the board. 0's here serve as place holders for the player position.
	int* position_on_board = (int*)calloc(BOARD_SIZE, sizeof(int));

	// Intializing all players position to 0 before the start of the game.
	for (int i = 0; i < player_size; i++) {
		player[i].current_position = 0;
		printf("player%d current_position = %d\n", i + 1, player[i].current_position);
	}

	return position_on_board;
}


//'rolling_die' function generates a random number between 1-6,mimicking outcome of actual die roll.
int rolling_die(int seed)
{
	int roll;
	//providing srand function a seed (seed passed is different every time) to make rand function truly random. (Note: without seed rand function returns random numbers but in a sequence, which is repeated every time we run the program).
	srand(seed); 

	//Setting MAX & MIN Limit on rand function, so that we get random function only between 1-6.
	roll = rand() % (MAX_DIE_NUMBER + 1 - MIN_DIE_NUMBER) + MIN_DIE_NUMBER;

	printf("die roll== %d\n", roll);

	return roll;

}


//'check_ladder' function checks if a player as encountered a ladder or not, if so players current position is updated(incremented) to ladder's destination.
int check_ladder(int current_position) {
	//if players current position matches with ladder position,then players current position is updated with ladders destination.

	if (current_position == LADDER1) {
		printf("YAAY!!! LADDER!! off to position %d\n", LADDER1_DESTINATION);
		return current_position = LADDER1_DESTINATION;
	}

	if (current_position == LADDER2) {
		printf("YAAY!!! LADDER!! off to position %d\n", LADDER2_DESTINATION);
		return current_position = LADDER2_DESTINATION;
	}

	if (current_position == LADDER3) {
		printf("YAAY!!! LADDER!! off to position %d\n", LADDER3_DESTINATION);
		return current_position = LADDER3_DESTINATION;
	}

	if (current_position == LADDER4) {
		printf("YAAY!!! LADDER!! off to position %d\n", LADDER4_DESTINATION);
		return current_position = LADDER4_DESTINATION;
	}

	if (current_position == LADDER5) {
		printf("YAAY!!! LADDER!! off to position %d\n", LADDER5_DESTINATION);
		return current_position = LADDER5_DESTINATION;
	}

	if (current_position == LADDER6) {
		printf("YAAY!!! LADDER!! off to position %d\n", LADDER6_DESTINATION);
		return current_position = LADDER6_DESTINATION;
	}

	if (current_position == LADDER7) {
		printf("YAAY!!! LADDER!! off to position %d\n", LADDER7_DESTINATION);
		return current_position = LADDER7_DESTINATION;
	}

	if (current_position == LADDER8) {
		printf("YAAY!!! LADDER!! off to position %d\n", LADDER8_DESTINATION);
		return current_position = LADDER8_DESTINATION;
	}

	return current_position;
}


//'check_snake' function checks if a player as encountered a snake or not, if so players current position is updated(decremented) to snake's destination.
int check_snake(int current_position) {
//if players current position matches with snake position, then players current position is updated with snakes destination.

	if (current_position == SNAKE1) {
		printf("OOPSS!! SNAKE!!! down we go back to position %d\n", SNAKE1_DESTINATION);
		return current_position = SNAKE1_DESTINATION;
	}

	if (current_position == SNAKE2) {
		printf("OOPSS!! SNAKE!!! down we go back to position %d\n", SNAKE2_DESTINATION);
		return current_position = SNAKE2_DESTINATION;
	}

	if (current_position == SNAKE3) {
		printf("OOPSS!! SNAKE!!! down we go back to position %d\n", SNAKE3_DESTINATION);
		return current_position = SNAKE3_DESTINATION;
	}

	if (current_position == SNAKE4) {
		printf("OOPSS!! SNAKE!!! down we go back to position %d\n", SNAKE4_DESTINATION);
		return current_position = SNAKE4_DESTINATION;
	}

	if (current_position == SNAKE5) {
		printf("OOPSS!! SNAKE!!! down we go back to position %d\n", SNAKE5_DESTINATION);
		return current_position = SNAKE5_DESTINATION;
	}

	if (current_position == SNAKE6) {
		printf("OOPSS!! SNAKE!!! down we go back to position %d\n", SNAKE6_DESTINATION);
		return current_position = SNAKE6_DESTINATION;
	}


	return current_position;
}



//'play_game' function makes the next move for the player and updates current and previous poistion of the player respectively.
int play_game(Player_info* player, int player_size, int* position_on_board, int* die_seed) {
	
	int next_move;

	for (int i = 0; i < player_size; i++) {

		//Asking wheter player wants to continue playing or not
		printf("\nEnter any zero number to play next step.\nEnter 0 to exit the game\n");
		scanf("%d", &next_move);

		if (!next_move) //if player enters 0, zero is returned.
			return 0;  

		//if player wants to continue playing we call 'play_game' for the next player move.
		
		//Setting players current_position with players previous_position begining of players move.
		player[i].previous_position = player[i].current_position;
		printf("\nplayer%d previous_position = %d\n", i + 1, player[i].previous_position);

		//'rolling_die' function returns random number from 1-6 to and sets as players move.
		player[i].player_move = rolling_die(*die_seed);
		//Updating players current position in accordance to players move made in the above line.
		player[i].current_position += player[i].player_move;
		printf("player%d current_position = %d\n", i + 1, player[i].current_position);

		//if any time player position exceeds above 100, the move is nullified and players position is set back to position prior to the move.
		//Ex. player at position 97 and 'rolling_die' function returns 6, In this case players current position gets updated 97+6=103 which is greater than 100, hence the move is nuulified and player position is set back to 97. 
		if (player[i].current_position > 100)
			player[i].current_position = player[i].previous_position;

		// To check if players current position matches with ladder position or not.
		player[i].current_position = check_ladder(player[i].current_position);

		// To check if players current position matches with snake position or not.
		player[i].current_position = check_snake(player[i].current_position);

		//To display the board with updated player positions.
		set_board(player, position_on_board, i);


		//Incrementing the seed value after each turn so that it decreases the probablity of rand function repeating the sequences. 
		*die_seed += 1; 

	}
	return 0;
}


//'start_game' function calls the play game and monitors the player position to check whether any player reached the winning position[i.e 100]
int start_game(Player_info* player, int player_size, int* position_on_board, int* die_seed)
{
	int next_move = 1, winner = 0;

	while (next_move) {

		//'play_game' is called for the next player move.
		next_move = play_game(player, player_size, position_on_board, die_seed); //'play_game' returns zero if player wants to quit the game, otherwise returns a non zero value.

		//monitoring after every move whether any player reached position 100 (winning position). 
		for (int i = 0; i < player_size; i++) {
			if (player[i].current_position == 100) {
				winner = i + 1;
				break;
			}
		}

	}

	return 0;
}