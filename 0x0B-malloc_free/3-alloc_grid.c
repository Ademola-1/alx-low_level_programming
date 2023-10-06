#include <stdio.h>

/**
  * alloc_grid - returns a pointer to a 2D array of integers
  * @width: width of the array.
  * @height: height of the array.
  * Return: pointer of an array of integers
  */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridout == (int **)malloc(height * sizeof(int *));

	if (gridout == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gridout[i] = (int *)calloc(width, sizeof(int));
		if (gridout[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(gridout[j]);
			}
			free(gridout);
			return (NULL);
		}
	}
	return (gridout);
}
