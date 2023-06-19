#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	if(sal>100000)
	{
		hra=sal*27.0/100;
		da=sal*23.0/100;
	}
	else if(sal>=50001)
	{
		hra=sal*21.0/100;
		da=sal*19.0/100;
	}
	else if(sal>=25001)
	{
		hra=sal*19.0/100;
		da=sal*21.0/100;
	}	
	else if(sal>=10001)
	{
		hra=sal*19.0/100;
		da=sal*20.0/100;
	}
	else
	{
		hra=sal*17.0/100;
		da=sal*19.0/100;
	}
	gross=sal+hra+da;
	printf("\nPayslip\n----------------------------\n");
	printf("Salary %i\n",sal);
	printf("House Rent Allowence %.2f\n",hra);
	printf("Dearness Allowence %.2f\n",da);
	printf("Gross salary %.2f",gross);
	return 0;
}
