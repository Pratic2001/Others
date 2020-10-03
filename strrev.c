#include<stdio.h>
#include<string.h>
int main ()
{ 
	char a[100];
	printf("enter you reverse string\n");
	gets(a);
	strrev(a);
	printf("\n after reverseing your string %s",a);
	puts(a);
	return 0;
}
