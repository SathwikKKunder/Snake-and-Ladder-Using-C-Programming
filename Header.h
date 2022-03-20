//MAX Number that could be obtained from a single die roll
#define MAX_DIE_NUMBER 6      
//MIN Number that could be obtained from a single die roll
#define MIN_DIE_NUMBER 1

//Actually 100, but since array index is from 0-99 and To match with numbers on the board 1-100,size intialized as 101 so we get 100 too (personal perference :))
#define BOARD_SIZE 101       

//Position of the ladders on the board
#define LADDER1 1
#define LADDER2 4
#define LADDER3 8
#define LADDER4 21
#define LADDER5 28
#define LADDER6 50
#define LADDER7 72
#define LADDER8 80

//Destination of the ladders(i.e. to which position the ladder leads to)
#define LADDER1_DESTINATION 38
#define LADDER2_DESTINATION 14
#define LADDER3_DESTINATION 30
#define LADDER4_DESTINATION 42
#define LADDER5_DESTINATION 76
#define LADDER6_DESTINATION 67
#define LADDER7_DESTINATION 91
#define LADDER8_DESTINATION 99

//Position of the snakes on the board
#define SNAKE1 62
#define SNAKE2 64
#define SNAKE3 74
#define SNAKE4 88
#define SNAKE5 95
#define SNAKE6 97

//Destination of the snakes(i.e. to which position the snakes leads to)
#define SNAKE1_DESTINATION 18
#define SNAKE2_DESTINATION 60
#define SNAKE3_DESTINATION 36
#define SNAKE4_DESTINATION 24
#define SNAKE5_DESTINATION 75
#define SNAKE6_DESTINATION 78


//Defining a structutre to store information about players move and position on the board. 
typedef struct _player_info_ Player_info;
struct _player_info_ {
	int current_position, player_move, previous_position;
};

typedef struct _board_info_ Board_info;
struct _board_info_ {
	int* position_on_board; //to display the player position on the board.
};

//'set_board' function updates the player position on the board after each move and calls 'display_board' function to display the board.
void set_board(Player_info* player, int* position_on_board, int player_no);


//'display_board' displays the board to the player.
void display_board(int* position_on_board);


//'intialize_game' function initializes each players position and player position pointers on the board to '0' at begining of the game.
int* intialize_game(Player_info* player, int player_size);


//'rolling_die' function generates a random number between 1-6,mimicking outcome of actual die roll. 
int rolling_die(int seed);


//'check_ladder' function checks if a player as encountered a ladder or not, if so players current position is updated(incremented) to ladder's destination.
int check_ladder(int current_position);


//'check_snake' function checks if a player as encountered a snake or not, if so players current position is updated(decremented) to snake's destination.
int check_snake(int current_position);


//'play_game' function makes the next move for the player and updates current and previous poistion of the player respectively.
int play_game(Player_info* player, int player_size, int* position_on_board, int* die_seed);


//'start_game' function calls the play game and monitors the player position to check whether any player reached the winning position[i.e 100]
int start_game(Player_info* player, int player_size, int* position_on_board, int* die_seed);
