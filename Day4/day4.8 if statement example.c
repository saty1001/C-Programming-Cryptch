#include<stdio.h>
int main()
{
	int f,s;
	printf("enter two number:\n");
	scanf("%d %d",&f,&s);
	if(f>s)
	{
		printf("first number is greater");
	}
	if(s>f)
	{
		printf("seconf number is great");
	}
	if(f==s)
	{
		printf("both are equal");
	}
}
