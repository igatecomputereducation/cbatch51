#include<stdio.h>
int main()
{
	int a[50],n,i,pos;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Position:");
	scanf("%i",&pos);
	
	if(pos<1 || pos>n)
		printf("Invalid position");
	else
	{
		pos--;
		printf("%i",a[pos]);
	}
	
	return 0;
}