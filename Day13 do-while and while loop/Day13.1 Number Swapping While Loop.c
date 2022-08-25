#include<stdio.h>
int main()
{
	int no,b;
	printf("enter any number:");
	scanf("%d",&no);
	while(no!=0)
	{
		b=no%10;
		printf("%d",b);
		no=no/10;
	}
}
