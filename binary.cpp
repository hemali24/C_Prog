#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num,i,j, a[10],l,ch,s;
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
        printf(" %d ", a[j]);
    }
    
    for(l=0;j[1];l++);
    for(i=0;i<1/2;i++)
    {
    	ch=s[i];
    	s[i]=s[l-1-i];
    	s[l-1-i]=ch;
	}
    
    	printf("Reverse of Binary String is %s",s);
    	getch();
}
