#include<stdio.h>
int main()
{
	int area,sumofangle,angle1,angle2,angle3;
	printf("enter angle1\n");
	scanf("%d",&angle1);
		printf("enter angle12\n");
		scanf("%d",&angle2);
			printf("enter angle3\n");
			scanf("%d",&angle3);
			sumofangle=angle1+angle2+angle3;
	if(sumofangle==180)
	printf("triangle is valid");
	else
	printf("triangle is invalid");
	return 0;
	
}
