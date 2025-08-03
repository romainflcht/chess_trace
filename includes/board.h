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
    SQUARE_t** board; 
}   CHESSBOARD_t; 

// * _ FUNCTIONS DECLARATION ___________________________________________________

/**
 * @brief 
 * Initialize memory space for the chessboard. Also initialize each SQUARE_t 
 * with its color. 
 * 
 * @param board pointer to the CHESSBOARD_t structure to initialize. 
 */
void init_board(CHESSBOARD_t* board); 


/**
 * @brief 
 * Free any CHESSBOARD_t variable.  
 * 
 * @param board the chessboard to free. 
 */
void free_board(CHESSBOARD_t* board); 


/**
 * @brief 
 * Print the chessboard on the standard output. 
 * 
 * @param board      the chessboard to print. 
 * @param is_flipped flag to print the chessboard flipped. 
 */
void print_chessboard(CHESSBOARD_t* board, uint8_t is_flipped); 
#endif 