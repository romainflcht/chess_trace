#include <stdio.h>
#include <stdlib.h>
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

    // BLACK
    board.board[0][0].piece = create_piece(ROOK, BLACK); 
    board.board[0][1].piece = create_piece(KNIGHT, BLACK); 
    board.board[0][2].piece = create_piece(BISHOP, BLACK); 
    board.board[0][3].piece = create_piece(QUEEN, BLACK); 
    board.board[0][4].piece = create_piece(KING, BLACK); 
    board.board[0][5].piece = create_piece(BISHOP, BLACK); 
    board.board[0][6].piece = create_piece(KNIGHT, BLACK); 
    board.board[0][7].piece = create_piece(ROOK, BLACK); 

    board.board[1][0].piece = create_piece(PAWN, BLACK); 
    board.board[1][1].piece = create_piece(PAWN, BLACK); 
    board.board[1][2].piece = create_piece(PAWN, BLACK); 
    board.board[1][3].piece = create_piece(PAWN, BLACK); 
    board.board[1][4].piece = create_piece(PAWN, BLACK); 
    board.board[1][5].piece = create_piece(PAWN, BLACK); 
    board.board[1][6].piece = create_piece(PAWN, BLACK); 
    board.board[1][7].piece = create_piece(PAWN, BLACK); 



    // WHITE
    board.board[7][0].piece = create_piece(ROOK, WHITE); 
    board.board[7][1].piece = create_piece(KNIGHT, WHITE); 
    board.board[7][2].piece = create_piece(BISHOP, WHITE); 
    board.board[7][3].piece = create_piece(QUEEN, WHITE); 
    board.board[7][4].piece = create_piece(KING, WHITE); 
    board.board[7][5].piece = create_piece(BISHOP, WHITE); 
    board.board[7][6].piece = create_piece(KNIGHT, WHITE); 
    board.board[7][7].piece = create_piece(ROOK, WHITE); 

    board.board[6][0].piece = create_piece(PAWN, WHITE); 
    board.board[6][1].piece = create_piece(PAWN, WHITE); 
    board.board[6][2].piece = create_piece(PAWN, WHITE); 
    board.board[6][3].piece = create_piece(PAWN, WHITE); 
    board.board[6][4].piece = create_piece(PAWN, WHITE); 
    board.board[6][5].piece = create_piece(PAWN, WHITE); 
    board.board[6][6].piece = create_piece(PAWN, WHITE); 
    board.board[6][7].piece = create_piece(PAWN, WHITE); 

    print_chessboard(&board); 
    return 0; 
}