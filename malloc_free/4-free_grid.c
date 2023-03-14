#include <stdlib.h>
/**
 * print_grid - ...
 * @grid: ...
 * @width: ...
 * @height: ...
 *
 * Return: ..
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
