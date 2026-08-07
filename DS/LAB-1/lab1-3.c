#include<stdio.h>
void main()
{
	int n,i,count=0,sum=0,product=1,rem;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	for (i=0;i<=n;i++)
	{
		rem = n%10;
		count++;
		n=n/10;
		
		sum = sum+rem;
		product = product*rem;
	
	}
	
	printf("Count is %d sum is %d product is %d",count,sum,product);
		
}
