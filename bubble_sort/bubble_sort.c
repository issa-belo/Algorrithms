#include <stdio.h>

void bubble_sort(int v[], int size)
{
	int	swap;
	int	i;
	int	j;

	swap = 1;

	while(i < size - 1 && swap)
	{
		j = 0;
		swap = 0;
		while(j < size - 1 - i)
		{
			if(v[j] > v[j+1])
			{
				int	temp;

				temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
				swap = 1;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	int array[] = {90, 22, 76, 2, -77, -1, 1, 99, 33};

	int size = sizeof(array) / sizeof(array[0]);
	
	 bubble_sort(array, size);
	for(int i=0; i < size; i++)
		printf("%i\n", array[i]);
}

