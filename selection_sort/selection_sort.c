#include <stdio.h>

void selection_sort(int arr[], int length);
int main(int argc, char *arcgv[])
{
	int array[] = {90, 87, 4, 7, 36, 2, 3, 8, 0, -90};

	int size = sizeof(array) / sizeof(array[0]);
	
	selection_sort(array, size);
	for(int i=0; i<size; i++)
		printf("%i\n", array[i]);
	return 0;		
}

void selection_sort(int arr[], int length)
{
	for(int i = 0; i < length - 1; i++)
	{
		int	min_position;

		min_position = i;
		for(int j = i + 1; j < length; j++)
			if(arr[j] < arr[min_position])
				min_position = j;
		if(min_position !=i)
		{
			int	temp;

			temp = arr[i];
			arr[i] = arr[min_position ];
			arr[min_position] = temp;
		}
	}

}
