#include<stdio.h>

void	reverse(int a[], int length);
int	main(int argc, char *argv[])
{
	int	arr[] = {9,8,7,6,1,2,3,4,5};
	int	size = sizeof(arr) / sizeof(arr[0]);

	reverse(arr, size);

	for(int i=0; i<size; i++)
		printf("%i", arr[i]);
}

void	reverse(int a[], int length)
{
	int	i;

	i=0;
	while(i < (length / 2))
	{
		int temp = a[i];
		a[i] = a[length - i - 1];
		a[length - i - 1] = temp;
		i++;
	}
}
