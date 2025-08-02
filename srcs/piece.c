#include "piece.h"


/**
 * @brief 
 * Allocate memory for a PIECE_t structure. 
 * 
 * @param type  type of the piece, PAWN, ROOK...
 * @param color color of the piece, either BLACK or WHITE.
 */
PIECE_t* create_piece(PIECE_TYPE_t type, COLOR_t color)
{
    PIECE_t* piece;

    piece = malloc(sizeof(PIECE_t)); 
    if (!piece)
        return NULL; 

    piece->color = color; 
    piece->type  = type;

    return piece; 
}