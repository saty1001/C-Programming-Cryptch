#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter natural number for sum ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
		printf("sum of natural number %d \n",sum);
}
