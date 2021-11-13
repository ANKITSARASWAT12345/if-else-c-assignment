#include<stdio.h>
int main()
{
	int x;
	printf("enter the value of x");
	scanf("%d",&x);
	if((x%5==0)&&(x%11==0))
	printf("the number is divisible by 5 and 11 both");
	else
	printf("the number is not divisible by 5 and 11 both");
	return 0;
}
