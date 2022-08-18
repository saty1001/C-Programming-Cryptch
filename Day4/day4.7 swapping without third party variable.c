#include<stdio.h>
int main()
{
	int a=5,b=10,c;
	printf("before swapping a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d and b=%d\n",a,b);
}
