#include<stdio.h>
void main()
{
	int n,repet[10]={0},i=0,digit=0;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	while(n>0)
	{
		digit = n%10;
		repet[digit]++;
		n=n/10;
	}
	
	for (i=0;i<=n;i++)
	{
		if (repet(i)>0)
		{
			printf("%d",repet(i));
		}
	}
	
	
}
