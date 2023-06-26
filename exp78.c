#include<stdio.h>
int main()
{
	int x;
	
	x=5;
	igate:
		printf("%i\n",x);
		x=x+1;
	if(x<=10)
		goto igate;
	
	
	
	return 0;
}
