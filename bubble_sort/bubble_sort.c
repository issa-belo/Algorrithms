#include <stdio.h>

void bubble_sort(int arr[], int size);
int main(int argc, char *argv[])
{
	int array[] = {5, 4, 3, 2, 1, 0, 9, 8, 7, 6};
	int length = 10;
	bubble_sort(array, length);

	for(int i = 0; i < length; i++)
		printf("%d\n", array[i]);
}

void bubble_sort(int arr[], int size)
{
	for(int i=0; i < size; i++)
	{
		for(int j=0; j < (size - 1 - i); j++)
		{
			if(arr[j] < arr[j+1])
			{
				int	temp;
				temp = arr[j + 1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
