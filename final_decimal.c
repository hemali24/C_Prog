/*
Have the function StringChallenge(strArr) read the array of strings stored in strArr, which will contain two elements, the first will be a positive decimal number and the second element will be a binary number. Your goal is to determine how many digits in the binary number need to be changed to represent the decimal number correctly (either 0 change to 1 or vice versa). For example: if strArr is ["56", "011000"] then your program should return 1 because only 1 digit needs to change in the binary number (the first zero needs to become a 1) to correctly represent 56 in binary.
Examples
Input: {"5624", "0010111111001"}
Output: 2
Input: {"44", "111111"}
Output: 3
*/
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>


void StringChallenge(char * strArr[], int arrLength) {
  
  int decimal=0;
  int counter=0;
  int i=0;
  int j=0;
  int length;
  int value;
  char givenbinary[1000];
  int binary[100];
  int changedbinary[100];


char *ptr;
length=strlen(strArr[1]);

strcpy (givenbinary,strArr[1]);

decimal=atoi(strArr[0]);
//printf("calculate :");

while (decimal>=1)
{
  value=decimal%2;
  if(value==0) binary[i]=48;
  else if(value==1) binary[i]=49;

  decimal=decimal/2;
  //printf("%d\n",binary[i]);
  i++;
}

for (i=0;i<length;i++)
{
 changedbinary[i]=givenbinary[i];
}

i=0; counter=0;
for(i=0, j=length-1;i<length&&j>=0;i++,j--)
{
  if(binary[j]!=changedbinary[i])
  {
    counter++;
  }
}

  // code goes here  
  printf("%d", counter);

}

int main(void) { 
   
  // keep this function call here
  char * A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  StringChallenge(A, arrLength);
  return 0;
    
}
