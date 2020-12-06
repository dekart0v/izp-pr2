/*
####################################################
#          Made by Ilia Iudenkov (xiuden00)        #
#        VUT FIT 2020 (zima) - IZP (Project #2)    #
#              06.12.2020. 23:59:59                #
#     https://github.com/dekart0v/izp-pr2.git      #
#     Works:                                       #
####################################################
*/

//arr[cell_length][cells num][rows num] - array dimensions

// HEADERS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// CONSTANTS
#define CELL_LENGTH 200 // max amount of chars in one cell
#define ROWS_NUM 50     // max amount of rows in table
#define CELLS_NUM 50    // max amount of cells in 1 row

// FUNCTIONS
int ***allocateTable(int cell_legth, int cells_num, int rows_num);

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

    if (argc > 1) // main cycle for arguement checking (TODO)
    {
        int ***tab = allocateTable(CELL_LENGTH, CELLS_NUM, ROWS_NUM); // creating contant array

        // TODO
        // FUNCTIONS TO OPERATE WITH TABLE CONTENTS

        free(tab); // free RAM for content array
  }

    // SAVING CHANGES (closing file)
    fclose(input_file);
    return 0;
}

// FUNCTION ALLOCATING RAM FOR 3-DIMENSIANAL ARRAY (TODO make dynamical)
int ***allocateTable(int cell_legth, int cells_num, int rows_num)
{
    int ***table; // init 3D array

    table = (int***)malloc(cell_legth * sizeof(char)); // allocate RAM for chars in cells
    for(int i = 0; i < cell_legth; i++)
    {
        table[i] = (int**)malloc(cells_num * sizeof(int)); // allocate RAM for each cell in a row
        for(int j = 0; j < cells_num; j++)
        {
            table[i][j] = (int*)malloc(rows_num * sizeof(int)); // allocate RAM for each row in a table
        }
    }

    return table; 
}