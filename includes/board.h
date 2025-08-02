#ifndef _BOARD_H_
#define _BOARD_H_

// * _ INCLUDES ________________________________________________________________
#include <stdint.h>
#include <stdlib.h>

#include "square.h"

// * _ DEFINES _________________________________________________________________
#define CHESSBOARD_SIZE 8

// * _ STRUCTURES DEFINITION ___________________________________________________
typedef struct Chessboard
{
    uint8_t is_flipped; 
    SQUARE_t** board; 
}   CHESSBOARD_t; 


void init_board(CHESSBOARD_t* board, uint8_t is_flipped); 

void print_chessboard(CHESSBOARD_t* board); 
#endif 