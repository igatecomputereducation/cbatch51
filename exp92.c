#include<stdio.h>
int main()
{
	int i,n,fact;
	
	printf("Enter the natural number:");
	scanf("%i",&n);
	
	fact=1;
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i=i+1;
	}
	
	printf("Factorial %i",fact);
	return 0;
}
