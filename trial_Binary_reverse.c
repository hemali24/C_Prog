#include <stdio.h> 
#include <string.h>
#include <math.h>
#include <stdlib.h>

void StringChallenge(char * str) {
  int sum, i, j, a[100];
  int num = atoi(str);
  
  for(i=0; num>0;i++)
  {
    a[i]=num%2;
    num=num/2;
  }

  while(i%8 !=0)
  {
    a[i]=0;
    i++;
  }

  int counter=0;
  for(j=i-1;j>=0;j--)
  {
    sum +=a[j]*pow(2,counter);
    counter++;
  }

  printf("%d\n",sum);
  // code goes here  
  //printf("%s", str);

}

int main(void) { 
   
  // keep this function call here
  
    
}
