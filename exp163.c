#include<stdio.h>
int main()
{
	int a[50],n,i,esum,osum;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	for(esum=0,osum=0,i=0;i<n;i++)
	{
		if(a[i]%2==0)
			esum=esum+a[i];
		else
			osum=osum+a[i];
	}
	
	printf("Even numbers sum %i\n",esum);
	printf("Odd numbers sum %i",osum);
	return 0;
}
