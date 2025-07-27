#include <stdio.h>

void selection_sort_while(int arr[], int size);
void selection_sort(int arr[], int size);
int	main(int argc, char *argv[])
{
	int array[] = {9, 8, 7, 1, 2, 3, 4, 5, 6, 7};

	int length = sizeof(array) / sizeof(array[0]);

	selection_sort_while(array, length);
	for(int i=0; i<length; i++)
	{
		printf("\t%i\n", array[i]);
	}
}
/*
void selection_sort(int arr[], int size)
{
	for(int i=0; i<size-1; i++)
	{
		int	min_pos;
		min_pos = i;
		for(int j=i+1; j<size; j++)
			if(arr[j] < arr[min_pos])
				min_pos = j;

		if(min_pos !=i)
		{
			int temp = arr[i];
			 arr[i] = arr[min_pos];
			 arr[min_pos] = temp;
		}
	}
}
*/

void selection_sort_while(int arr[], int size)
{
	int i = 0;
	while(i < size - 1)
	{
		int j = i+1;
		int min_pos = i;

		while(j < size)	
		{
			if(arr[j] < arr[min_pos])
				min_pos = j;
			j++;
		}
		if(min_pos !=i)
		{
			int temp = arr[i];
			arr[i] = arr[min_pos];
			arr[min_pos] = temp;
		}
		i++;
	}
}
