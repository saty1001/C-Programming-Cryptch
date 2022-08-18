#include<stdio.h>
void main()
{
	char ch;
	float amt,wd,cd;
	printf("enter initial amount:");
	scanf("%f",&amt);
	printf("enter your choice: \n b for balance enquiry \n c for credit \n w for withdraw\n");
	printf("enter here ");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'b':
			printf("current balance: %f",amt);
			break;
			
		case 'c':
			printf("add amount ");
			scanf("%f",&cd);
			amt+=cd;
			printf("new amount is %f",amt);
			break;
		
		case 'w':
			printf("current balance: %f\n",amt);
			printf("enter withdrawal amount ");
			scanf("%f",&wd);
			if(wd<amt)
			{
			amt-=wd;
			printf("amount left is %f",amt);
			}
			else
			printf("insufficent amount");
			break;
			
		default:
			printf("invalid value");
		
			
	}
	
}
