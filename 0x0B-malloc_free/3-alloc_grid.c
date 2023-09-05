#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
int **grid;
int row, col;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (row = 0; row < height; row++)
{
grid[row] = malloc(sizeof(int) * width);
if (grid[row] == NULL)
{
for (; row >= 0; row--)
free(grid[row]);
free(grid);
return (NULL);
}
}

for (row = 0; row < height; row++)
{
for (col = 0; col < width; col++)
{
grid[row][col] = 0;
}
}

return (grid);
}
