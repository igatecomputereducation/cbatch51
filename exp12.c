#include<stdio.h>
int main()
{
	int hei,bre;
	float area;
	printf("Breadth:");
	scanf("%i",&bre);
	printf("Height:");
	scanf("%i",&hei);
	area=1.0/2.0*bre*hei;
	printf("Area of right angle triangle %f",area);
	return 0;
}
