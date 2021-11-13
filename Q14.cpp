#include<stdio.h>
int main()
{
	int side,side1,side2,side3;
	printf("enter side1\n");
	scanf("%d",&side1);
		printf("enter side2\n");
	scanf("%d",&side2);
		printf("enter side3\n");
	scanf("%d",&side3);
	if(side1==side2 && side2==side3)
	printf("triangle is equilateral");
	else if(side1!=side2 && side2!=side3);
	printf("triangle is scalene");
	else
	printf("triangle is isosceles");
	return 0;
}
