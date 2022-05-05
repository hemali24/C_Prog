#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num,i,j, a[10],l,ch;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i = 0; num > 0; i++)
    {
        a[i] = num % 2;
        num = num / 2;
    }
    printf("\n Binary Number of a Number =  ");
    
	for(j = i - 1; j >= 0; j--)  
	{
        printf("%d", a[j]);
    }
}
