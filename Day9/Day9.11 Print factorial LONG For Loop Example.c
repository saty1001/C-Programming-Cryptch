#include<stdio.h>
void main()
{
	long int i,n,f=1;
	printf("enter any number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of %d is =%ld",n,f);
}
