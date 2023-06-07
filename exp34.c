#include<stdio.h>
int main()
{
	int choice;
	printf("1.permanent\n2.temporary\nEnter your choice [1..2]");
	scanf("%i",&choice);
	if(choice==1)
	{
		printf("Mr.Narasimha\n");
		printf("Kukkalagunta\n");
		printf("Kavali");
	}
	if(choice==2)
	{
		printf("Mr.Narasimha\n");
		printf("c/o igate solutions\n");
		printf("Kavali");
	}
	if(choice<1)
		printf("Invalid input");
	if(choice>2)
		printf("Invalid input");
	return 0;
}
