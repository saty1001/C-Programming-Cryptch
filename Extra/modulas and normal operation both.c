#include<stdio.h>
int main()
{
	int num;
	printf("1 == normal operation and\n2 == modulas operation\n");
	scanf("%d",&num);
	if(num==1)
	{
	char ch;
	float a,b,c;
	printf("enter two number: ");
	scanf("%f %f",&a,&b);
	printf("enter your choice\n + for addition\n - for subtraction\n * for multiple\n / for division\n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':
		c=a+b;
		printf("addition=%f",c);
		break;
		
		case '-':
		c=a-b;
		printf("subtraction=%f",c);
		break;
		
		
		case '*':
		c=a*b;
		printf("multiple=%f",c);
		break;
		
		case '/':
		c=a/b;
		printf("division=%f",c);
		break;
		
		default:
		printf("invalid choice");
		
	}
}
else if (num == 2)
{
	char ch;
	int a,b,c;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	printf("enter special choice\nm for modulas\n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'm':
		c=a%b;
		printf("modulas=%d",c);
		break;
		
		default:
		printf("nothing");
	}
	
	
	
}
else 
{
	printf("invalid choice");
}

}
