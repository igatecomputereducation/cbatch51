#include<stdio.h>
int main()
{
	int a[50],n,i,min,max;
	printf("How many elements:");
	scanf("%i",&n);
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	for(min=max=a[0],i=1;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
	printf("Minimum %i\n",min);
	printf("Maximum %i",max);
	return 0;
}
