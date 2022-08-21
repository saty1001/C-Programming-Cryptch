#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("enter any number you want up to print series ");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=3; i<=n;i++)
	{
		c=a+b;
		printf(" %d0",c);
		a=b;
		b=c;
	}
}
