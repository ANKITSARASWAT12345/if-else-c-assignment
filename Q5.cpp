#include<stdio.h>
int main()
{
	int year,leapyear;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	printf("the year is leapyear");
	else 
	printf("the year is not a leap year");
	return 0;
	
}
