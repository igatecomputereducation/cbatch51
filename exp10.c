#include<stdio.h>
int main()
{
	int rad;
	float area,cir;
	printf("Give the radius:");
	scanf("%i",&rad);
	area=3.14*rad*rad;
	cir=2*3.14*rad;
	printf("Area of circle %f\n",area);
	printf("circumference of circle %f",cir);
	return 0;
}
