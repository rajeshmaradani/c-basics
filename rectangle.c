#include<stdio.h>
void main()
{
	
	float radius,area,peri;
	float pi = 3.14;
	printf("enter the radius of the circle\n");
	scanf("%f",&radius);
	area= pi*radius*radius;
	peri= 2*pi*radius;
	printf("area of the circle with radius %f is %f\n",radius,area);
	printf("perimeter of the circle with radius %f is %f",radius,peri);
}
