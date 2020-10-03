#include<stdio.h>
int main ()
{
	int i,n,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	int a[n];
	printf("enter the array element");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];
	}
	printf("\n the element is %d",sum);
	return 0;
}
