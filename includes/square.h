#ifndef _SQUARE_H_
#define _SQUARE_H_

// * _ INCLUDES ________________________________________________________________
#include <stdint.h>

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#include "color.h"
#include "piece.h"

// * _ STRUCTURES DEFINITION ___________________________________________________
typedef struct Square
{
    COLOR_t     color; 
    PIECE_t*    piece; 
}   SQUARE_t; 

// * _ FUNCTIONS DEFINITION ____________________________________________________

/**
 * @brief 
 * Initialize every field of a SQUARE_t structure. 
 * 
 * @param square pointer to the SQUARE_t to initialize. 
 * @param piece  pointer to a PIECE_t that is on the square, NULL if not piece 
 *               is on the square. 
 * @param color color of the square, either BLACK or WHITE. 
 */
void init_square(SQUARE_t* square, PIECE_t* piece, COLOR_t color); 


/**
 * @brief 
 * draw the square and its content on the standard output. 
 * 
 * @param square the square to draw. 
 */
void print_square(SQUARE_t* square); 
#endif