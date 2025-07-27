#include <stdio.h>
#include <string.h>

int main(void)
{

	//searching an items in an intigrs array

/*	int numbers [] = {20, 500, 10, 5, 100, 1, 50};
	
	int n;
	printf("Number: ");
	scanf("%d", &n);

	for(int i=0; i<7; i++)
	{
		if(numbers[i] == n)
		{
			printf("found\n");
			return 0;
		}
	}
	printf("not found\n");
	return 1; */
/*	
	char *string[] = {"issa", "ali", "bello", "suliman", "osman", "fafa"};
	
	char s[666];
	printf("Strings: ");
	scanf("%s", s);

	for(int i=0; i<6; i++)
	{
		if(strcmp(string[i], s) == 0)
		{
			printf("found\n");
			return 0;
		}
	}
		printf("not found\n");
		return 1;
*/

	char *names[] = {"yori", "sabli", "nora"};
	char *numbers[] = {"+33-123-342", "+21-567-289", "+249-1234-563"};
	
	char name;

	printf("Name: ");
	scanf("%s", &name);

	for(int i=0; i<3; i++)
	{
		if(strcmp(names[i], &name) == 0)
		{
			printf("found%s\n", numbers[i]);
			return 0;
		}
	}
	printf("Not found\n");
	return 1;
}
