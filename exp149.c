#include<stdio.h>
int main()
{
	int i,j,x;
	
	x=1;
	for(j=1;j<=5;j++)
	{
		for(i=1;i<=j;i++)
			printf("%5i",x++);
		printf("\n\n");
	}
	
	return 0;
}
