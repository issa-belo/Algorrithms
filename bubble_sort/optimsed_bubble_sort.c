#include <stdio.h>

void opt_bubble_sort(int arr[], int length);
int main(int argc, char *argv[])
{
	int array[] = {66, 93, 18, 71, 10, 25, 24, 33, 42, 51};
	int size = sizeof(array) / sizeof(array[0]);
	
	opt_bubble_sort(array, size);
	for(int i = 0; i < size; i++)
		printf("%i\n", array[i]);
	return 0;	
}

void opt_bubble_sort(int arr[], int length)
{
	int i = 0;
	int swapped = 1;

	while(i < length - 1 && swapped)
	{	
		int j = 0;
		swapped = 0;

		while(j < length - 1 - i)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}
