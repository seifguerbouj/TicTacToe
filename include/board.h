//
// Created by Seif Guerbouj on 03.07.21.
//

#ifndef TICTACTOE_BOARD_H
#define TICTACTOE_BOARD_H

#include <string.h>
#include <iostream>
#include <vector>
#include "../include/player.h"

#define GRID_SIZE 3

/*
 Board class responsible for creating tha grid and doing all basic functionalities of the game
 */
class board {
public :
    board ();
    void play();
    void show_grid();
    void ask_turn(player *player1,player *player2);
    void generate_grid();
    bool check_for_wins(player *player1, player *player2);
    bool check_for_draw();
private :
    std::string grid[GRID_SIZE][GRID_SIZE];
    player *p1 = NULL;
    player *p2 = NULL;
};

#endif //TICTACTOE_BOARD_H
