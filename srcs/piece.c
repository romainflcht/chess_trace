#include "piece.h"


/**
 * @brief 
 * Initialize every field of a PIECE_t structure. 
 * 
 * @param piece pointer to the PIECE_t structure to initialize.  
 * @param color color of the piece, either BLACK or WHITE.
 * @param type  type of the piece, PAWN, ROOK...
 */
void init_piece(PIECE_t* piece, COLOR_t color, PIECE_TYPE_t type)
{
    if (!piece)
        return; 

    piece->color = color; 
    piece->type  = type; 
    return; 
}