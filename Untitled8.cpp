#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n%5==0)
	printf("number is valid");
	else if(n%11==0)
	printf("number is valid");
	else
	printf("invalid");
	return 0;
}
