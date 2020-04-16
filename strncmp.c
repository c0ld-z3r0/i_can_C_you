#include<stdio.h>
int main()
{
	printf("Enter a string : ");
	char str[8];
	gets(str);
	printf("%s",str);
	printf("%d",strncmp(str,"COOLDAV",8));
	return 0;
}
