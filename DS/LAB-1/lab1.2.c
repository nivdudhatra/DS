#include<stdio.h>
void main()
{
	int n,i=0,j,count=0,arr[32];
	
	printf("Enter n:");
	scanf("%d",&n);
	
	
	while(n>0)
	{
		arr[i] = n%2;
		n=n/2;
		i++;
		count++;
	}
	
	for (j=count;j>=0;j--)
	{
		printf("%d",arr[j]);

	}
	
	
	
	
}
