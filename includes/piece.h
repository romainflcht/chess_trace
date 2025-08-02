#ifndef _PIECE_H_
#define _PIECE_H_


#include <stdint.h>

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
void init_piece(PIECE_t* piece, COLOR_t color, PIECE_TYPE_t type); 
#endif