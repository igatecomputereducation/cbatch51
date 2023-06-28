#include<stdio.h>
int main()
{
	int i,n,esum,osum;
	printf("Enter the limit:");
	scanf("%i",&n);
	esum=0;
	osum=0;
	i=1;
	while(i<=n)
	{
		if(i%2==0)
			esum=esum+i;
		else
			osum=osum+i;
		
		i=i+1;
	}
	printf("Even numbers sum %i\n",esum);
	printf("Odd numbers sum %i",osum);
	
	return 0;
}
