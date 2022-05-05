#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num,i,j,value, a[100];
	int counter = 0;
	num=atoi(str);
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i = 0; num > 0; i++)
    {
        a[i] = num % 2;
        num = num / 2;
    }

//Added Padding for 8 bits of code	
    
    while(i%8 !=0)
    {
    	a[i] = 0;
    	i++;
	}
    

    for (j = i-1; j>=0; j--)
    {
    	value += a[j]* pow(2,counter);
    	counter++;
    }
    
    printf("The decimal value is %d\n", value);
    
}
