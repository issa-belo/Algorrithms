#include <stdio.h>

void insertion(int a[], int lenth);
int main(int argc, char *argv[])
{
	int arr[] = {19, 0, 87, 4, 62 ,8, 56};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	insertion(arr, size);
	for(int i=0; i<size; i++)
		printf("%i\n", arr[i]);
}

void insertion(int a[], int length)
{
	int	i;
	i = 1;
	while(i < length)
	{
		int key = a[i];
		int j = i - 1;

		while(j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j+1] = key;
		i++;
	}
}
