#include<stdio.h>
int main()
{
	int a[5][5],i,j;
	
	printf("Enter 5x5 matrix\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%i",&a[i][j]);
	}
		
	printf("The given matrix\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%5i",a[i][j]);
		printf("\n\n");
	}
	
	return 0;
}
