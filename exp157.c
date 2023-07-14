#include<stdio.h>
int main()
{
	int n,m,small,i;
	
	printf("First natural number:");
	scanf("%i",&n);
	
	printf("Second natural number:");
	scanf("%i",&m);
	
	small=(n<m)?n:m;
	
	for(i=small;i>=1;i--)
	{
		if(n%i==0 && m%i==0)
		{
			printf("GCD %i",i)	;
			break;
		}	
	}	
	
	return 0;
}
