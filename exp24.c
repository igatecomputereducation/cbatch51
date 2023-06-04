#include<stdio.h>
int main()
{
	int amt,fh,th,hdr,ff,tw,tn,fv,to,on;
	printf("Enter the amount:");
	scanf("%i",&amt);
	fh=amt/500;
	amt=amt%500;
	th=amt/200;
	amt=amt%200;
	hdr=amt/100;
	amt=amt%100;
	ff=amt/50;
	amt=amt%50;
	tw=amt/20;
	amt=amt%20;
	tn=amt/10;
	amt=amt%10;
	fv=amt/5;
	amt=amt%5;
	to=amt/2;
	amt=amt%2;
	on=amt;
	printf("500X%i\n",fh);
	printf("200X%i\n",th);
	printf("100X%i\n",hdr);
	printf("50X%i\n",ff);
	printf("20X%i\n",tw);
	printf("10X%i\n",tn);
	printf("5X%i\n",fv);
	printf("2X%i\n",to);
	printf("1x%i",on);
	return 0;
}
