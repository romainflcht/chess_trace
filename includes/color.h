#ifndef _COLOR_H_
#define _COLOR_H_

#include <stdint.h>

#define FG_BG_OFFSET 10


typedef enum Color
{
    BLACK   = 232, 
    WHITE   = 250, 
    GREEN   = 107, 
    BEIGE   = 231,
    DEFAULT = 0, 
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