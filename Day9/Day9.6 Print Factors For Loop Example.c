#include<stdio.h>
void main()
{
	int i,n;
	printf("enter any number ");
	scanf("%d",&n);
	printf("factor is giving below \n");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\t",i);
	}
}
