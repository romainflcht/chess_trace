#include "board.h"


/**
 * @brief 
 * Initialize memory space for the chessboard. Also initialize each SQUARE_t 
 * with its color. 
 * 
 * @param board      pointer to the CHESSBOARD_t structure to initialize. 
 */
void init_board(CHESSBOARD_t* board)
{ 
    SQUARE_t*   row; 
    uint8_t     offset;
    uint8_t     i; 
    uint8_t     j;  

    // Allocate memory for a pointer array (array that will contain pointer to 
    // SQUARE_t structure). 
    board->board = malloc(sizeof(SQUARE_t*) * CHESSBOARD_SIZE);
    if (!board->board)
        return; 

    offset = 0; 
    
    for (i = 0; i < CHESSBOARD_SIZE; i++)
    {
        // Allocate memory for an array of SQUARE_t structure. 
        // This array will represent a row of the chessboard. 
        row = malloc(sizeof(SQUARE_t) * CHESSBOARD_SIZE); 
        if (!row)
        {
            free_board(board); 
            return; 
        }

        // Initialize each squre of the line with its color. 
        for (j = 0; j < CHESSBOARD_SIZE; j++)
            init_square(row + j, NULL, (j % 2 == offset) ? BEIGE : GREEN); 

        // Save the line into the SQUARE_t pointer array and offset the color by
        // one to get the checkered effect. 
        board->board[i] = row; 
        offset = !offset; 
    }

    // Create and add chesspieces to the chessboard using X-macro. 
    #define X(chessboard, row, col, piece_type, color) \
        chessboard->board[row][col].piece = create_piece(piece_type, color); 

        CREATE_PIECES
    #undef X

    return; 
}


/**
 * @brief 
 * Free any CHESSBOARD_t variable. 
 * 
 * @param board the chessboard to free. 
 */
void free_board(CHESSBOARD_t* board)
{
    uint8_t i; 
    uint8_t j;

    // Check if we got a valid address and if the board isn't already freed. 
    if (!board || !board->board)
        return; 

    // Loop through each SQUARE_t to free PIECE_t structure. 
    for (i = 0; i < CHESSBOARD_SIZE; i++)
    {
        for (j = 0; j < CHESSBOARD_SIZE; j++)
        {
            if (!board->board[i][j].piece)
                continue;
            
            free(board->board[i][j].piece); 
            
        }

        // Free the current row. 
        free(board->board[i]); 
    }

    // Free the whole board once finished. 
    free(board->board); 
    return; 
}


/**
 * @brief 
 * Print the chessboard on the standard output. 
 * 
 * @param board      the chessboard to print. 
 * @param is_flipped flag to print the chessboard flipped. 
 */
void print_chessboard(CHESSBOARD_t* board, uint8_t is_flipped)
{
    int8_t i; 
    int8_t j;

    if (is_flipped)
    {
        for (i = CHESSBOARD_SIZE - 1; i >= 0; i--)
        {
            for (j = CHESSBOARD_SIZE - 1; j >= 0; j--)
            {
                if (j == CHESSBOARD_SIZE - 1)
                    wprintf(L"%d ", CHESSBOARD_SIZE - i); 

                print_square(&(board->board[i][j]));
            }
                
            // Print a newline when printing a line is finished. 
            wprintf(L"\n"); 
        }

        wprintf(L"  h g f e d c b a\n"); 
    }

    else
    {
        for (i = 0; i < CHESSBOARD_SIZE; i++)
        {
            for (j = 0; j < CHESSBOARD_SIZE; j++)
            {
                if (j == 0)
                    wprintf(L"%d ", CHESSBOARD_SIZE - i); 

                print_square(&(board->board[i][j]));
            }
                
            // Print a newline when printing a line is finished. 
            wprintf(L"\n"); 
        }

        wprintf(L"  a b c d e f g h\n"); 
    }
}