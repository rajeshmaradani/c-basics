#include<stdio.h>
int main()
{
	int x,y,n,a,l,sum,d;
	scanf("%d%d",&x,&y);
	n = y/x;
	
	
	l = x*n;
	sum=n*(x+l)/2;
	printf("sum of multiples is %d",sum);
	
}
