#include<stdio.h>
void main()
{
	int hour,minutes,time;
	scanf("%d%d",&hour,&minutes);
	time=hour*60+minutes;
	printf ("%d minutes",time);
}
