#include<stdio.h>
void main()
{
	char ch;
	float a,b,c;
	printf("enter two number");
	scanf("%f %f",&a,&b);
	printf("enter your choice\n+ for addition\n- for subtraction\n* for multiple\n/ for division \n");
	scanf(" %c",&ch);
	switch(ch)
	{
	case '+':
		c=a+b;
		printf("answer %f",c);
		break;
	
	case '-':
		c=a-b;
		printf("answer %f",c);
		break;
		
	case '*':
		c=a*b;
		printf("answer %f",c);
		break;
		
	case '/':
		c=a/b;
		printf("answer %f",c);
	break;
		default:
		printf("invalid operator");
	}
}
