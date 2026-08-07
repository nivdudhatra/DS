#include<stdio.h>
void main()
{
	int n,sum=0,i=0;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	int a=0;
	int b=1;
	
	for (i=0;i<n;i++)
	{
		printf("%d",a);
		sum = sum+a;
		a=b;
		b=sum;	
	}
}
