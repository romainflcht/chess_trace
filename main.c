#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

#include "square.h"
#include "piece.h"
#include "board.h"

int main(void)
{
    CHESSBOARD_t board; 

    setlocale(LC_CTYPE, "");

    init_board(&board); 
    print_chessboard(&board, 0); 

    free_board(&board); 

    return 0; 
}
