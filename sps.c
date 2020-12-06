/*
####################################################
#          Made by Ilia Iudenkov (xiuden00)        #
#        VUT FIT 2020 (zima) - IZP (Project #2)    #
#              06.12.2020. 23:59:59                #
#     https://github.com/dekart0v/ #
#     Works: #
####################################################
*/

//arr[cell_length][cells num][rows num] - array dimensions

// HEADERS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// CONSTANTS
#define CELL_LENGTH 200 // max amount of chars in one cell
#define ROWS_NUM 50 // max amount of rows in table
#define CELLS_NUM 50 // max amount of cells in 1 row

// FUNCTIONS
int*** allocateTable(int cell_legth, int cells_num, int rows_num);

// MAIN program
int main(int argc, char *argv[])
{
    // OPEN THE FILE
    FILE *input_file;
    input_file = fopen(argv[argc - 1], "w+");
    if (input_file == NULL)
    {
        perror("Error, no such file in directory.");
    }

    if (argc > 1)
    {
        
    }

    // SAVING CHANGES (closing file)
    fclose(input_file);
    return 0;
}

// FUNCTION ALLOCATING RAM FOR 3-DIMENSIANAL ARRAY
int*** allocateTable(int cell_legth, int cells_num, int rows_num)
{

}