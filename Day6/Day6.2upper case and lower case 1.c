#include<stdio.h>
int main()
{
	char ht;
	printf("enter any alphabet:\n");
	scanf("%c",&ht);
	if (ht>='A' && ht<='Z')
	{
		printf("alphabet is in uppercase");
	}
	else
	printf("alphabet is in lowercase");
}
