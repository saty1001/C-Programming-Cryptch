#include<stdio.h>
void main()
{
	int i,b,p,f=1;
	printf("enter base and power number ");
	scanf("%d %d",&b,&p);
	
	for(i=1;i<=p;i++)
	{
		f=f*b;
	}
	printf("result=%d",f);
}
