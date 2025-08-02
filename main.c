#include <stdio.h>
#include <locale.h>
#include <wchar.h>

#include "square.h"
#include "piece.h"
#include "board.h"

int main(void)
{
    setlocale(LC_CTYPE, "");
    CHESSBOARD_t board; 

    init_board(&board, 0); 

    print_chessboard(&board); 
    return 0; 
}