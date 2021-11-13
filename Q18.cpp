#include<stdio.h>
int main()
{
	float unit,totalbill,unitcharge;
	printf("enter unit");
	scanf("%f",&unit);
	if(unit<=50)
	unitcharge=unit*0.5;
	else if(unit<=150)
	unitcharge=unit*0.75;
	else if(unit<=250)
	unitcharge=unit*1.2;
	else
	unitcharge=unit*1.5;
	totalbill=unitcharge+unitcharge*0.2;
	printf("totalbill=%.2f",totalbill);
	return 0;
}
