#include<stdio.h>
int main()
{
	char type;
	int cmr,pmr,nu;
	float bill,uch;
	printf("Type of electrical connection [d/c/i/a]:");
	scanf("%c",&type);
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	nu=cmr-pmr;
	if(type=='d')
	{
		if(nu>500)
			uch=9.35;
		else if(nu>=401)
			uch=8.50;
		else if(nu>=301)
			uch=7.75;
		else if(nu>=201)
			uch=7.10;
		else if(nu>=101)
			uch=5.40;
		else if(nu>=51)
			uch=3.35;
		else
			uch=2.65;
	}
	else if(type=='c')
	{
		if(nu>500)
			uch=10.15;
		else if(nu>=301)
			uch=9.60;
		else if(nu>=101)
			uch=9.05;
		else if(nu>=51)
			uch=7.65;
		else
			uch=5.60;
	}
	else if(type=='i')
	{
		uch=6.70;
	}
	else
	{
		uch=0.50;
	}
	bill=nu*uch;
	printf("Number of units %i\n",nu);
	printf("Bill to pay @%.2f per unit %.2f",uch,bill);
	return 0;
}
