#include <stdio.h>

int main()
{
	char input[100];
	
	printf("My name is Hemali!");
	fgets(input,100,stdin);
	puts("Hello Hemali!");
	puts(input);
	
	return (0);
}
