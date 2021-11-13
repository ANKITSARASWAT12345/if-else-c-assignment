#include<stdio.h>
int main()
{
	char x,alphabate;
	printf("enter x");
	scanf("%c",&x);
	if((x>='a' && x<='z')||(x>= 'A' && x<='Z'))
	printf("the character is alphabate");
	else 
	printf("the chracter is not a  alphabate");
	return 0;
	
	
}
