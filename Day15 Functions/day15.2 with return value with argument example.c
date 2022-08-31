#include<stdio.h>
float area()
{
	float h=20,w=40,area;
	area= h*w;
	return area;
}
int main()
{
	printf("area of rectangle=%f",area());
}
