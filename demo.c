#include<stdio.h>
int main()
{
	int x=30;
	switch(x+20)
	{
		case 30:
			printf("one\n");
			break;
		case 50:
			printf("two\n");
			break;
		case 70:
			printf("three\n");
			break;
		default:
			printf("four");
	}
	return 0;
}

