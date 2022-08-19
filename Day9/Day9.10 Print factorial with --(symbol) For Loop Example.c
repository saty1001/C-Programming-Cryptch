#include<stdio.h>
void main()
{
	int i,n,f=1;
	printf("enter any number ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("factorial of %d is =%d",n,f);
}
