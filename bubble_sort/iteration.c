#include <stdio.h>

void draw(int n);
int recursionDraw(int n);

int main(void)
{
	int height;
	printf("Height: ");
	scanf("%d", &height);
	draw(height);
}

//iterative solution
void draw(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i+1; j++)
		{
			printf("#");
		}
		printf("\n");
         }

}
/*

//recursive solustion

int recursionDraw(int n)
{
	if(n <= 0)
	{
		return 1;
	}
	recursionDraw(n - 1);

	for (int i = 0; i < n; i++)
	{
		printf("#");
	}
	printf("\n");
	return 0;
}*/
