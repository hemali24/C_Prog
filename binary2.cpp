#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num,i, a[32];
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i = 0; num > 0; i++)
    {
        a[i] = num % 2;
        num = num / 2;
    }
    printf("\n Binary Number of a Number =  ");
    
	for(j = 0; j < i; j++)  
	{
        printf("%d", a[j]);
    }
}
