#include<stdio.h>
int main()
{
	int a=5,b=20,c;
	printf("before swapping a=%d and b=%d \n",a,b);
	
	c=b;
	b=a;
	a=c;
	printf("after swapping a=%d and b=%d",a,b);
}
