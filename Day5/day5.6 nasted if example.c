#include<stdio.h>
int main()
{
	int age;
	printf("enter your age \n");
	scanf("%d",&age);
	if(age>=18)
	{
		if(age<30)
		{
			printf("not elegable for presidental election\n");
		}
		printf("eligeble for voting");
	}
	else
	{
		printf("not elegable for voting");
	}
}
