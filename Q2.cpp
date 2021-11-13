#include<stdio.h>
int main()
{
	int x,y,z,maximum;
	printf("enter the value of x,y,z:\n");
	scanf("%d%d%d",&x,&y,&z);
	if((x>y)&&(x>z))
	printf("x is maximum");
	else if((y>x)&&(y>z))
	printf("y is maximum");
	else if((z>x)&&(z>y))
	printf("z is maximum");
	return 0;
}
