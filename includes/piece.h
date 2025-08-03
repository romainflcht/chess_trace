#ifndef _PIECE_H_
#define _PIECE_H_


// * _ INCLUDES ________________________________________________________________
#include <stdint.h>
#include <stdlib.h>

#include "color.h"


// * _ DEFINES _________________________________________________________________
#define CREATE_PIECES   X(board, 0, 0, ROOK, BLACK)   \
                        X(board, 0, 1, KNIGHT, BLACK) \
                        X(board, 0, 2, BISHOP, BLACK) \
                        X(board, 0, 3, QUEEN, BLACK)  \
                        X(board, 0, 4, KING, BLACK)   \
                        X(board, 0, 5, BISHOP, BLACK) \
                        X(board, 0, 6, KNIGHT, BLACK) \
                        X(board, 0, 7, ROOK, BLACK)   \
                        X(board, 1, 0, PAWN, BLACK)   \
                        X(board, 1, 1, PAWN, BLACK)   \
                        X(board, 1, 2, PAWN, BLACK)   \
                        X(board, 1, 3, PAWN, BLACK)   \
                        X(board, 1, 4, PAWN, BLACK)   \
                        X(board, 1, 5, PAWN, BLACK)   \
                        X(board, 1, 6, PAWN, BLACK)   \
                        X(board, 1, 7, PAWN, BLACK)   \
                        X(board, 7, 0, ROOK, WHITE)   \
                        X(board, 7, 1, KNIGHT, WHITE) \
                        X(board, 7, 2, BISHOP, WHITE) \
                        X(board, 7, 3, QUEEN, WHITE)  \
                        X(board, 7, 4, KING, WHITE)   \
                        X(board, 7, 5, BISHOP, WHITE) \
                        X(board, 7, 6, KNIGHT, WHITE) \
                        X(board, 7, 7, ROOK, WHITE)   \
                        X(board, 6, 0, PAWN, WHITE)   \
                        X(board, 6, 1, PAWN, WHITE)   \
                        X(board, 6, 2, PAWN, WHITE)   \
                        X(board, 6, 3, PAWN, WHITE)   \
                        X(board, 6, 4, PAWN, WHITE)   \
                        X(board, 6, 5, PAWN, WHITE)   \
                        X(board, 6, 6, PAWN, WHITE)   \
                        X(board, 6, 7, PAWN, WHITE)   \


// * _ STRUCTURES DEFINITION ___________________________________________________
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