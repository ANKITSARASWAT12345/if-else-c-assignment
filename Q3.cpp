#include<stdio.h>
int main()
{
	int x,neg,pos,zero;
	printf("enter the value of x");
	scanf("%d",&x);
	if(x<0)
	printf("the value of x is negative");
	else if(x>0)
	printf("the value of x is positive");
	else if(x==0)
	printf("the value if x is equal to zero");
	return 0;
}
