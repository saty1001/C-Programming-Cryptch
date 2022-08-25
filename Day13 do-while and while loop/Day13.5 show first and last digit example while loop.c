#include<stdio.h>
int main()
{
	int no,last,first;
	printf("enter any number ");
	scanf("%d",&no);
	last=no%10;
	do
	{
		first=no%10;
		no=no/10;
	}while(no!=0);
	printf("first digit of number is %d and last digit of number is %d",first,last);
}
