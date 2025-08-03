#include "square.h"


/**
 * @brief 
 * Initialize every field of a SQUARE_t structure. 
 * 
 * @param square pointer to the SQUARE_t to initialize. 
 * @param piece  pointer to a PIECE_t that is on the square, NULL if not piece 
 *               is on the square. 
 * @param color color of the square, either BLACK or WHITE. 
 */
void init_square(SQUARE_t* square, PIECE_t* piece, COLOR_t color)
{
    square->color = color; 
    square->piece = piece; 
    return; 
}


/**
 * @brief 
 * draw the square and its content on the standard output. 
 * 
 * @param square the square to draw. 
 */
void print_square(SQUARE_t* square)
{
    PIECE_TYPE_t    piece; 
    COLOR_t         piece_color;
    
    // If there is a piece on the square, get the piece type and color to print 
    // it. 
    if (square->piece != NULL)
    {
        piece = square->piece->type; 
        piece_color = square->piece->color;
    }

    else
    {
        piece = EMPTY; 
        piece_color = DEFAULT; 
    }
    
    // Print the square. 
    //wprintf(L"\x1b[%d;%dm%lc \x1b[0m", piece_color, fg_to_bg(square->color), piece);

    wprintf(L"\x1b[38;5;%dm\x1b[48;5;%dm%lc \x1b[0m", piece_color, square->color, piece);
    // wprintf(L"%dm%dm%lc \x1b[0m", piece_color, square->color, piece);
    return; 
}

