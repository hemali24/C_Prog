#include <stdio.h>

int main()
{
	float a,b;
	printf("Enter a number:");
	scanf("%f",&a);
	
	printf("Enter second number:");
	scanf("%f",&b);
	
	printf("The addition is : %f + %f = %f\n",a,b,a+b);
	printf("The subtraction is: %f - %f = %f\n",b,a,b-a);
	printf("The division is: %f / %f = %f \n",b,a,b/a);
	printf("The multiplication is : %f*%f = %f \n", b,a,b*a);
	return(0);
}
