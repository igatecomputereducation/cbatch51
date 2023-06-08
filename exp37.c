#include<stdio.h>
int main()
{
	int n;
	printf("Enter any 3 digit natural number:");
	scanf("%i",&n);
	if(n%10==n/100)
		printf("Palindrome number");
	else
		printf("Not a palindrome number");
	return 0;
}
