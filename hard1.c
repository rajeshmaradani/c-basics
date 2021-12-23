#include<stdio.h>
void main()
{
	int total_amount,two_thousand,five_hundred,two_hundred,hundred,fifty,twenty,ten,five,two,one;
	scanf("%d",&total_amount);
	two_thousand = total_amount/2000;
	total_amount = total_amount%2000;
	five_hundred = total_amount/500;
	total_amount = total_amount%500;
	two_hundred = total_amount/200;
	total_amount = total_amount%200;
	hundred = total_amount/100;
	total_amount = total_amount%100;
	fifty = total_amount/50;
	total_amount = total_amount%50;
	twenty = total_amount/20;
	total_amount = total_amount%20;
	ten = total_amount/10;
	total_amount = total_amount%10;
	five = total_amount/5;
	total_amount = total_amount%5;
	two = total_amount/2;
	total_amount = total_amount%2;
	one = total_amount/1;
	printf("2000 notes- %d\n 500 notes- %d\n 200 notes- %d\n 100 notes- %d\n 50 notes- %d\n 20 notes- %d\n 10 notes-%d\n 5 notes-%d\n 2 notes-%d\n 1 notes-%d",two_thousand,five_hundred,two_hundred,hundred,fifty,twenty,ten,five,two,one);
}

