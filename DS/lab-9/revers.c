#include<stdio.h>

int reverse(int n,int rev)
{
	if(n==0)
		return rev;
	
	return reverse(n / 10, rev * 10 + n % 10);
}

void main()
{
	int n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	int rev = reverse(n,0);
	
	printf("reverse number is: %d",rev);
	
}





