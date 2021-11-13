#include<stdio.h>
int main()
{
	int math,chem,bio,physics,computer;
float per;
printf("enter marks of all five subjects");
scanf("%d%d%d%d%d",&math,&chem,&bio,&physics,&computer);
per=(math+chem+bio+physics+computer)/5;
if(per>=90)
	printf("grade A");
	else if(per>=80)
	printf("grade B");
	else if(per>=70)
	printf("grade C");
	else if(per>=60)
	printf("grade D");
	else if(per>=40)
	printf("grade E");
	else
	printf("grade F");
	return 0;
}
