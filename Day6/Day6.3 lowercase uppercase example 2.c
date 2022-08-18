#include<stdio.h>
int main()
{
	char ht;
	printf("enter any alphabet: \n");
	scanf("c%",&ht);
	if(ht>=65 && ht<=90)
	{
		printf("alphabet is in upper case");
	}
	else
	printf("alphabet is in lower case");
}
