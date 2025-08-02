#ifndef _COLOR_H_
#define _COLOR_H_

#include <stdint.h>

#define FG_BG_OFFSET 10


typedef enum Color
{
    BLACK   = 30, 
    WHITE   = 37, 
    DEFAULT = 39, 
}   COLOR_t; 


// * _ FUNCTIONS DECLARATION ___________________________________________________

/**
 * @brief 
 * Convert a foreground ANSI color to a ANSI background color. 
 * 
 * @param color the ANSI foreground color value to convert. 
 * @return uint8_t the ANSI background color calculated.  
 */
uint8_t fg_to_bg(COLOR_t color); 
#endif