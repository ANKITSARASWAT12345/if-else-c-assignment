#include<stdio.h>
int main()
{
	char c,vowel,consonant;
	printf("enter c");
	scanf("%c",&c);
	if((c=='a' && c=='e' && c=='i' && c=='o' && c=='u') || (c=='A' && c=='E' && c=='I' && c=='O' && c=='U'))
	printf("the character is vowel");
	else 
	printf("the character is consonant");
	return 0;
}
