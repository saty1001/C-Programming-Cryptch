#include<stdio.h>
int add(int *p,int *q)
{
	int r;
	r= *p + *q;
	printf("addition = %d",r);
}
int main()
{
	int a=5,b=9;
	add(&a,&b);
}
