#include "color.h"


/**
 * @brief 
 * Convert a foreground ANSI color to a ANSI background color. 
 * 
 * @param color the ANSI foreground color value to convert. 
 * @return uint8_t the ANSI background color calculated.  
 */
uint8_t fg_to_bg(COLOR_t color)
{
    return color + FG_BG_OFFSET; 
}