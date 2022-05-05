#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>

void StringChallenge(char * str) {
  
//printf("Enter your number:");
//scanf("%d",&num);
//int str;

int num;
int a[100];
num=atoi(str);
int value;
    int count = 0;
    int i=0;
    while(num>=1) 
    {
		
		a[i] = num % 2;
		num = num/2;
    i++;
    //printf("%d, %d\n",num, i);
    }
	
    while (i%8 != 0) 
  {
    a[i] = 0;
    i++;     
  }
  value = i;
  //printf ("value = %d\n", value);
  	
	int sum=0;
  int j=0;
  int k=value-1;
	for (j=0; j<=value; j++)
  {
    if(k>=0)
    {
    	sum += a[j]* pow(2,k);	
    }k--;
	}
	printf("%d", sum); 

  // code goes here  
  //printf("%s", str);

}

int main(void) { 
   
  // keep this function call here
  StringChallenge(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
