#include<stdio.h>
int main ()
{
	int firstnum,secondnum;
	int mult=0,i;
	printf("enter the two number");
	scanf("%d %d",&firstnum,&secondnum);
	for(i=1;i<=secondnum;i++){
	mult=mult+firstnum;
	}
	printf("%d is the multipication of two number\n",mult);
	return 0;
}
