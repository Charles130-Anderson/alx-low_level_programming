#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
int index;

for (index = 0; index < height; index++)
{
free(grid[index]);
}
free(grid);
}
