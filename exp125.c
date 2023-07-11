#include<stdio.h>
int main()
{
	int n,i,flag;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	for(flag=1,i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}	
	}

	if(flag && n>1)
		printf("Prime number");
	else
		printf("Not a prime number");
		
	return 0;
}
