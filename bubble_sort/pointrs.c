#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char *S; 

	printf("S: ");
	scanf("%s", S);
	if(S == NULL)
	{
		return 1;
	}
	char *T = malloc(strlen(S) + 1);
	if(T == NULL)
		return 1;

	for(int i=0, n = strlen(S); i <= n; i++)
		T[i] = S[i];
	
	if(strlen(T) > 0)
		T[0] = toupper(T[0]);

	printf("%s\n", S);
	printf("%s\n", T);

	free(T);
	return 0;
}
