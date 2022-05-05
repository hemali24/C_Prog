#include <stdio.h> 
#include <string.h>
#include <math.h>

void StringChallenge(char * str) {
  
  int num, i, j, value, a[100];
  printf("Enter a number:");
  scanf("%d",&num);

//To chnage it to Binary format
 for(i=0; num>0; i++)
 {
  a[i]=num%2;
  num=num/2;
 }

while(i%8!=0)
{
  a[i]=0;
  i++;
}

int counter=0;
for(j=i-1;j>=0;j--)
{
  value +=a[j]*pow(2,counter);
  counter++;
}
  printf("The decimal value is %d\n",value);
}

int main(void) { 
   
  // keep this function call here
  StringChallenge(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
