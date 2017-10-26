#include <iostream>

using namespace std;

int main()
{

    /*
        Tic Tac Toe

        Needs:
            1. a variable that stores the val of whose turn it is (player 1 or player 2 ?)
            2. 2 variables that stores the position of tiles to be placed on the board
            3. a list to store tiles on the board
            4. a variable that stores # of turns ( to know if the game has reached the end of 9th turn)

        Pseudocode

            step 1
            ------

            initialize_game
            do {
                play_game
                display_result
            } while (want_to_play_again());


            step 2
            ------

                initialize_game
                -----------------

                - Sets up tic-tac-toe game
                - At the end of the pseudocode, the 3x3 board should be printed on the command prompt
                - At the end of the pseudocode, all the required variables for tic-tac-toe must be defined

                int num_turns = 0;
                int player_turn;
                int tile_pos_col, tile_pos_row;
                int winner;
                int board[9]

                clear_screen();
                draw_board(int board[])

                play_game
                ---------

                - executes tic-tac-toe game
                - At the end of the pseudocode, user will be asked to give col pos and row pos of its tile
                - At the end of the pseudocode if the coords aren't the same data type, or is out of range, it
                  is asked to type agai
                - the code must repeat until game is over

                do {
                    show_player_turn
                    prompt user input row
                    harvest user input
                    prompt user input col
                    harvest user input
                    update_the_game
                    check_for_lines

                } while(!is_game_over())


                display_result
                --------------
                - at the end of the pseudocode, the command prompt displays who won

                    i.e. Player 1 wins!

                display_result(int winner) {
                    switch(winner) {

                        case 1:
                            cout << "player 1 wins!" << endl;
                            break;
                        case 2:
                            cout << "player 2 wins!" << endl;
                            break;
                        default:
                            cout << "It's a cat game!" << endl;
                    }
                }

                want_to_play_again()
                --------------------

                - At the end of the pseudocode, true / false value is returned
                - In the beginnig of the pseudocode, it prompts the user whether to play or not
                    i.e "Do you want to play again (y/n)?: "

                - User registers information on whether he/she wants to play again


                bool want_to_play_again() {
                    prompt user whether to play or not
                    harvest response
                    validate response
                    return ture / false statement based on the validated response
                }


            step 3
            ------

                void draw_board(int board[]) **
                -----------------------------

                    - At the end of the function, it prints tic tac toe board on command prompt


                    int j = -1;
                    for(int i = 0; i < 3; i++) {
                        print "+---+---+---+"
                        print "| o | x |   |"
                    }

                    print "+---+---+---+"


                show_player_turn(int player_turn)
                ---------------------------------

                    - At the end of the pseudocode, it shows on command prompt whos turn it is

                        i.e. "It's player 1's turn"

                    void show_player_turn(int player_turn) {
                        switch (player_turn){
                            case 1:
                                cout << "Player 1's turn!";
                                break;
                            case 2:
                                cout << "Player 2's turn!";
                                break;
                        }
                    }

                prompt_input col/row
                --------------------

                    - At the end of the pseudocode, the statement is printed on command prompt asking for
                      the column position to place the tile


                        i.e.

                        "Enter col position (0-2): "


                    void prompt_pos_input(char * row_or_col) {
                        cout << "Enter " << row_or_col << " position (0-2): ";
                    }


                harvest_pos_input **
                -----------------

                    - At the end of the pseudocode, the value of the position of tile is stored in the referenced
                      variable.
                        col position --> tile_pos_col
                        row position --> tile_pos_row
                    - All inputs are validated before storage

                Update_the_game **
                ---------------

                    - At the end of the pseudocode, new board is re-drawn with newly placed tiles
                    - Before the redrawing of the board, existing printout statements on command prompt are cleared
                    - Before clearing existing contents, player's turn is updated

                        i.e. player 1's turn --> player's 2 turn

                    - Before updating player's turn, the info about player's turn is used to insert corresponding tile on board


                    update_board
                    update_player_turn
                    clear_existing_content
                    draw_board


                check_for_lines **
                ---------------

                    - At the end of the pesudocode, it should decide wether to keep going or discontinue the
                      game because there is winner.
                    - winner variable is updated if there is winner
                    - Before deciding wether to update winner variable, it checks whether any lines are formed

                        1. checks for vertical, diagonal and horizontal lines at the center
                        2. checks for horizintal and vertical lines on bottom left corner, and top right corner



                while_game_is_not_over
                ----------------------

                    - At the end of the game, it should return true or false
                    - True is returned, when number of turns is less than or equal to 9 and when there is no winner (say value of 0)

                    while_game_is_not_over(int number_of_turns, int winner) {

                        // return true if number of turns is less than or equal to 9 and when there is no winner
                        if(number_of_turns <= 9 && winner == 0) {
                            return true;
                        } else {
                            return false;
                        }
                    }

            step 4
            ------

                draw_board
                ---------
                    - At the end of the pseudocode, it should print ut 3x3 tic tac toe board with values inside

                    void draw_board(int board[]) {
                        // print tile with values row after row
                        for (int i = 0; i < 9; i += 3) {
                            print_line();
                            print_tile_with_values_in_a_row(int board[],i);
                        }

                        // finish the printing of the board by printing the bottom line

                        print_line();
                    }

                print_line
                ----------
                    - at the end of the pseudocode, it pprints out the line that encloses the tiles on the tic tac toe board

                    void print_line() {
                        cout << "+---+---+---+" << endl;

                    }

                print_tile_with_values_in_a_row
                ----------------------

                    - at the end of the pseudocode, it should print all tiles in a row with corresponding values inside
                    - 'x' is printed if board[i] == 1
                    - 'o' is printed if board[i] == 2
                    - ' ' is printed otherwise

                    void print_tile_with_values_in_a_row(int []board, int i) {
                        cout << "| " << return_tile_value(int board[], i) << " | " << return_tile_value(int board[], i+1) << " | " << return_tile_value(int board[], i+2) << " |";
                    }

                char return_tile_value(int board[] , int i) {
                    switch(board[i]) {
                        case 1:
                            return 'x';
                        case 2:
                            return 'o';
                        default:
                            return ' ';
                    }
                }

               show_player_turn(int player_turn)
                ---------------------------------

                    - At the end of the pseudocode, it shows on command prompt whos turn it is

                        i.e. "It's player 1's turn"

                    void show_player_turn(int player_turn) {
                        switch (player_turn){
                            case 1:
                                cout << "Player 1's turn!";
                                break;
                            case 2:
                                cout << "Player 2's turn!";
                                break;
                        }
                    }

                prompt_input col/row
                --------------------

                    - At the end of the pseudocode, the statement is printed on command prompt asking for
                      the column position to place the tile


                        i.e.

                        "Enter col position (0-2): "


                    void prompt_pos_input(char * row_or_col) {
                        cout << "Enter " << row_or_col << " position (0-2): ";
                    }


                harvest_pos_input
                -----------------

                    - at the end of the pseudocode, the value tile_pos_col and tile_pos_row must be filled with non-zero values


                    void harvest_pos_input(int &var_to_store_pos_val) {
                        cin >> var_to_store_pos_val;
                    }

                Update_the_game
                ---------------

                    - At the end of the pseudocode, new board is re-drawn with newly placed tiles
                    - Before the redrawing of the board, existing printout statements on command prompt are cleared
                    - Before clearing existing contents, player's turn is updated

                        i.e. player 1's turn --> player's 2 turn

                    - Before updating player's turn, the info about player's turn is used to insert corresponding tile on board


                    update_board
                    update_player_turn
                    update_num_of_turns
                    clear_existing_content
                    draw_board


                update_board
                ------------

                    - At the end of the pseudocode, int board[9] is updated
                    - tile_pos_row and tile_pos_col and player_turn are used to place new tile on the board
                    -

                    void update_board(int board[], int player_turn, int tile_pos_row, int tile_pos_col) {
                        switch(tile_pos_row) {
                            case 0:
                                board[tile_pos_col] = return_tile_type(player_turn)
                                break;
                            case 1:
                                board[tile_pos_col + 3] = return_tile_type(player_turn)
                                break;
                            case 2:
                                board[tile_pos_col + 6] = return_tile_type(player_turn)
                                break;
                        }
                    }

                return_tile_type
                ----------------

                    - At the end of the pseudocode, it should return the tile of corresponding player
                        - it returns 'x' if player is 1
                        - it returns 'o' if player is 2

                    char return_tile_type(int player_turn) {

                        switch(player_turn) {
                            case 1:
                                return 'x';
                            case 2:
                                return 'o';
                        }
                    }


                update_player_turn
                ------------------

                    - At the end of the pseudocode, the player's turn should be updated
                        - if the current player is 1, then update_player_turn changes its value to 2
                        - if the current player is 2, then update_player_turn changes its value to 1


                    void update_player_turn(int &player_turn) {
                        switch(player_turn) {
                            case 1:
                                player_turn = 2;
                                break;
                            case 2:
                                player_turn = 1;
                                break;
                        }
                    }

                update_num_of_turns
                -------------------

                    - At the end of the pseudocode, it should increment the value of update_num_of_turns by 1
                    - the variable for num_of_turn lies outside of the method


                    void update_num_of_turns(int &num_of_turns) {
                        num_of_turns++;
                    ]

                clear_existing_content
                ----------------------

                    - All printed output on command prompt must be cleared
                    - for windows, system('cls') is used
                    - for ubuntu, print('\033c') is used
                    - the clearing functions are in <stdlib.h> library

                    void clear_existing_content() {
                        #ifdef __APPLE__ || __unix__
                        system('clear');
                        #else
                        system('cls');
                        #endif
                    }


                check_for_lines
                ---------------

                    - At the end of the pesudocode, it should decide wether to keep going or discontinue the
                      game because there is winner.
                    - winner variable is updated if there is winner
                    - Before deciding wether to update winner variable, it checks whether any lines are formed
g
                        1. checks for vertical, diagonal and horizontal lines at the center
                        2. checks for horizintal and vertical lines on bottom left corner, and top right corner



                check_diagonals
                ---------------
                    - at the end of the pseudocode it should determine whether to update winner variable or not
                        - first, number of tiles from corresponding players are counted
                        - second, if tile count of the corresponding player is == 3, then the winner variable is set to the value of the player


                    void check_diagonals(int board[] , int &winner) {
                        int indexes_to_check[2][3] = {
                            {0, 4, 8},
                            {2, 4, 6}
                        }

                        int i = 0;
                        if(winner <= 0) {
                       .

                       .
                            while(i < 2) {

                                int player_1_cnt = 0;
                                int player_2_cnt = 0;

                                // count tiles per diagonal
                                for(int j : indexes_to_check[i]) {
                                    switch(board[j]) {
                                        case 1:
                                            player_1_cnt++;
                                        case 2:
                                            player_2_cnt++;
                                    }
                                }

                                // check if either of the two players won
                                if (player_1_cnt == 3) {
                                    winner = 1;
                                    break;
                                } else if (player_2_cnt == 3) {
                                    winner = 2;
                                    break;
                                }

                                i++;
                            }
                        }
                    }

                check_horizontals
                -----------------
                    void check_horizontals(int board[] , int &winner) {
                        int indexes_to_check[2][3] = {
                            {0, 1, 2},
                            {3, 4, 5},
                            {6, 7, 8}
                        }

                        int i = 0;
                        if(winner <= 0) {
                            while(i < 3) {

                                int player_1_cnt = 0;
                                int player_2_cnt = 0;

                                // count tiles per diagonal
                                for(int j : indexes_to_check[i]) {
                                    switch(board[j]) {
                                        case 1:
                                            player_1_cnt++;
                                        case 2:
                                            player_2_cnt++;
                                    }
                                }

                                // check if either of the two players won
                                if (player_1_cnt == 3) {
                                    winner = 1;
                                    break;
                                } else if (player_2_cnt == 3) {
                                    winner = 2;
                                    break;
                                }

                                i++;
                            }
                        }
                    }

                check_verticals
                ---------------
                    void check_horizontals(int board[] , int &winner) {
                        int indexes_to_check[2][3] = {
                            {0, 3, 6},
                            {1, 4, 7},
                            {2, 5, 8}
                        }

                        int i = 0;
                        if(winner <= 0) {
                            while(i < 3) {

                                int player_1_cnt = 0;
                                int player_2_cnt = 0;

                                // count tiles per diagonal
                                for(int j : indexes_to_check[i]) {
                                    switch(board[j]) {
                                        case 1:
                                            player_1_cnt++;
                                        case 2:
                                            player_2_cnt++;
                                    }
                                }

                                // check if either of the two players won
                                if (player_1_cnt == 3) {
                                    winner = 1;
                                    break;
                                } else if (player_2_cnt == 3) {
                                    winner = 2;
                                    break;
                                }

                                i++;
                            }
                        }
                    }

                while_game_is_not_over
                ----------------------

                    - At the end of the game, it should return true or false
                    - True is returned, when number of turns is less than or equal to 9 and when there is no winner (say value of 0)

                    while_game_is_not_over(int number_of_turns, int winner) {

                        // return true if number of turns is less than or equal to 9 and when there is no winner
                        if(number_of_turns <= 9 && winner == 0) {
                            return true;
                        } else {
                            return false;
                        }
                    }

        --------------------------------------------------------------------------------------------------

    */

    return 0;
}
