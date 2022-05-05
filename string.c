#include <stdio.h>
#include <string.h>

int main()
{
	char fullname[100];
	char first[50];
	char last[50];
	
	printf("Enter firstname: ");
	fgets(first,50,stdin);
	
	printf("Enter Lastname:");
	fgets(last,50,stdin);
	
	strcpy(fullname,first);
	strcat(fullname,last);
	
	printf("%s",fullname);
	
	return(0);
	
}
