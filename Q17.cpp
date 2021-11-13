#include<stdio.h>
int main()
{
	float bs,gs,da,hra;
	printf("enter bs");
	scanf("%f",&bs);
	if(bs<=10000)
	{
	hra=bs*0.2;
	da=bs*0.8;
}
	else if(bs<=2000)
	{
	hra=bs*0.25;
	da=bs*0.9;
}
	else
	{ 
	hra=bs*0.3;
	da=bs*0.95;
}
	gs=bs+da+hra;
	printf("gross salary=%.2f",gs);
	return 0;
}
