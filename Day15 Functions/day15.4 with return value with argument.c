#include<stdio.h>
float area(float *h,float *w)
{
	float area;
	area=*h * *w;
	return area;
}
int main()
{
	float h=12.3,w=3.2;
	printf("area of rectangle =%f",area(&h,&w));

	
}
