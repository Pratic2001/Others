#include<stdio.h>
#include<string.h>
int main ()
{
	char a[100];
	int i;
	printf("enter the string\n");
	gets(a);
	i=strlen(a);
	printf("\n length of your string is %d",i);
	return 0;
}
