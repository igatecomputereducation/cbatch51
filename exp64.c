#include<stdio.h>
int main()
{
	float wei,hei,bmi;
	printf("Enter height in feets:");
	scanf("%f",&hei);
	hei=hei*0.3048;
	printf("Enter the weight:");
	scanf("%f",&wei);
	bmi=wei/(hei*hei);
	printf("Body mass index %f\n",bmi);
	if(bmi>=30)
		printf("Obesity");
	else if(bmi>=25)
		printf("Overweight");
	else if(bmi>=18.5)
		printf("Normal weight");
	else
		printf("eat..sleep..and repeat..");
	return 0;
}




