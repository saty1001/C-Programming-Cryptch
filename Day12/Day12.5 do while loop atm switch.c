#include<stdio.h>
void main()
{
	char ch;
	float amt,wd,cd;
	int n;
	printf("enter initial amount:");
	scanf("%f",&amt);
	do
	{
		printf("enter your choice: \n b for balance enquiry \n c for credit \n w for withdraw \n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'b':
			printf("currenrt balance: %f",amt);
			break;
			
			case 'c':
				printf("enter credit amount:");
				scanf("%f",&cd);
				amt=amt+cd;
				printf("currenrt balance :%f",amt);
				break;
			case 'w':
				printf("enter debit amount:");
				scanf("%f",&wd);
				if(wd>amt)
				printf("insufficent balance");
				else
				{
					amt=amt-wd;
					printf("current balance: %f",amt);
					break;
					
					default:
						printf("invalid choice");
				}
				
		}
	printf("do you want to continue\n1 for yes\n2 for no");
	scanf("%d",&n);	
	}while(n==1);
}
