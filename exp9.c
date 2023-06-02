#include<stdio.h>
int main()
{
	int wid,hei,bre,vol;
	printf("Width:");
	scanf("%i",&wid);
	printf("Height:");
	scanf("%i",&hei);
	printf("Breadth:");
	scanf("%i",&bre);
	vol=wid*hei*bre;
	printf("Volume of box %i",vol);
	return 0;
}
