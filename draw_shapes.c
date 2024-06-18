#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

//Prints an arrow
void print_arrow(int leftCol, int size)
{
  for(int row=1; row<=size; row++){
    int minCol = leftCol + size - row+1, maxCol= leftCol + size + row-1;
    int col;
    for(col=1; col<minCol; col++) putchar(' ');
    for(    ; col<=maxCol; col++) putchar('*');
    putchar('\n');
  }

  int arrowWidth = (size*2)+1;
  for(int i=0; i<2; i++){
    for(int j=0; j<leftCol+2; j++){
      putchar(' ');
    }
    for(int k=0; k<arrowWidth-6; k++){
      putchar('*');
    }
    putchar('\n');
  }
}




