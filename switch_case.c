#include <stdio.h>

int main()
{
	char a;
	
	printf("Enter your choice (1,2 or 3): ");
	scanf("%c",&a);
	
	switch(a)
	{
		case '1':
			puts("Red!\n");
			break;
		
		case '2':
			puts("Green!");
			break;
		
		case '3':
			puts("Blue!");
			break;
			
		default:
			puts("Invalid Input!");
			
	}
	
	return(0);
}
