#ifndef _PIECE_H_
#define _PIECE_H_


#include <stdint.h>
#include <stdlib.h>

#include "color.h"


typedef enum Piece_type
{
    EMPTY  = 0x0020, 
    PAWN   = 0x2659, 
    ROOK   = 0x2656, 
    KNIGHT = 0x2658, 
    BISHOP = 0x2657, 
    QUEEN  = 0x2655, 
    KING   = 0x2654, 
}   PIECE_TYPE_t; 


typedef struct Piece
{
    COLOR_t color; 
    PIECE_TYPE_t type; 
}   PIECE_t; 

// * _ FUNCTIONS DECLARATION ___________________________________________________

/**
 * @brief 
 * Allocate memory for a PIECE_t structure. 
 * 
 * @param type  type of the piece, PAWN, ROOK...
 * @param color color of the piece, either BLACK or WHITE.
 */
PIECE_t* create_piece(PIECE_TYPE_t type, COLOR_t color);
#endif