#include "board.h"


/**
 * @brief 
 * Initialize memory space for the chessboard. Also initialize each SQUARE_t 
 * with its color. 
 * 
 * @param board      pointer to the CHESSBOARD_t structure to initialize. 
 * @param is_flipped flag to know if we need to render the chessboard flipped. 
 */
void init_board(CHESSBOARD_t* board, uint8_t is_flipped)
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
            init_square(row + j, NULL, (j % 2 == offset) ? WHITE : BLACK); 

        // Save the line into the SQUARE_t pointer array and offset the color by
        // one to get the checkered effect. 
        board->board[i] = row; 
        offset = !offset; 
    }


    board->is_flipped = is_flipped; 
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
    // TODO: free correcty the board in case of errors. 
    if (!board)
        return; 
        
    return; 
}


/**
 * @brief 
 * Print the chessboard on the standard output. 
 * 
 * @param board the chessboard to print. 
 */
void print_chessboard(CHESSBOARD_t* board)
{
    for (int i = 0; i < CHESSBOARD_SIZE; i++)
    {
        for (int j = 0; j < CHESSBOARD_SIZE; j++)
            print_square(&(board->board[i][j]));
            
        // Print a newline when printing a line is finished. 
        wprintf(L"\n"); 
    }
}