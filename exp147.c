#include<stdio.h>
int main()
{
	char ot,in;
	int i;
	for(ot='F';ot>='A';ot--)
	{
		for(in='A';in<=ot;in++)
			printf("%5c",in);
		for(i=1;i<=2*('F'-ot)-1;i++)
			printf("     ");
		for(in=ot;in>='A';in--)
		{
			if(in!='F')
				printf("%5c",in);
		}
		printf("\n\n");
	}
	return 0;
}
