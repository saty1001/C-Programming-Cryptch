#include<stdio.h>
int main()
{
	int i,n;
	printf("enter any number you want to print upto- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		printf("%d\n",i);
	}
}
