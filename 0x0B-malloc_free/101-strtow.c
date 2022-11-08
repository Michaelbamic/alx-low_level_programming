#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - frees a two dimensional array
 * @grid: multidimensional array of char
 * @height: height of the array
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **new;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	new = malloc((height + 1) * sizeof(char *));
	if (new == NULL || height == 0)
	{
		free(new);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				new[i] = malloc((c - k + 2) * sizeof(char));
				if (new[i] == NULL)
				{
					ch_free_grid(new, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			new[i][j] = str[k];
		new[i][j] = '\0';
	}
	new[i] = NULL;
	return (new);
}
