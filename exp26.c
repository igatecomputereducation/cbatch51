#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	if(num==0)
		printf("zero");
	if(num>0)
		printf("positive");
	if(num<0)
		printf("Negative");
	return 0;
}
