#include<stdio.h>
int main()
{
	int x[5];
	printf("Enter 2 integers..\n");
	scanf("%i%i",&x[0],&x[1]);
	x[2]=x[0]+x[1];
	x[3]=x[0]-x[1];
	x[4]=x[0]*x[1];
	printf("Addition %i\n",x[2]);
	printf("Subtraction %i\n",x[3]);
	printf("Product %i",x[4]);
	return 0;
}
