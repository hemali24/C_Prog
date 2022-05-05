#include<stdio.h>
int main()
{
	int bin[100];
	int i,q = 4567;
    int count = 0;
    i = 0;
    while( q >= 1 ) {
		
		bin[i] = q % 2;
		q = q/2;
        i++;
}printf("%d",i);
return 0;
}
