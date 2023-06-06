#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three angles of a shape\n");
	scanf("%i%i%i",&a,&b,&c);
	if(a+b+c==180)
		printf("triangle");
	if(a+b+c!=180)
		printf("Not a triangle");
	return 0;
}
