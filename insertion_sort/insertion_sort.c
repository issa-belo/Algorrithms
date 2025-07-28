#include <stdio.h>

void insertion_sort(int arr[], int length);

int main(void)
{
	int array[] = {11,9,92,28,8,-7,74,56};
	int size = sizeof(array) / sizeof(array[0]);
	insertion_sort(array, size);

	for(int i = 1; i<size; i++)
	{
		printf("%i\n", array[i]);
	}
}
void insertion_sort(int arr[], int length)
{
	for(int i=0; i<length; i++)
	{
		int key = arr[i]; 
		int j = i - 1;

		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key; 
	}
}
