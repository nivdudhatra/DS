#include<stdio.h>
void main()
{
	int n1,n2,i,j,k,temp;
	
	printf("Enter size of 1st array");
	scanf("%d",&n1);
	
	int a[n1];
	
	for (i=0;i<n1;i++)
	{
		printf("Enter value");
		scanf("%d",&a[i]);
	}
	
	
	printf("Enter size of 2nd array");
	scanf("%d",&n2);
	
	int arr[n2];
	
	for (i=0;i<n2;i++)
	{
		printf("Enter value");
		scanf("%d",&arr[i]);
	}
	
	
	int total=n1+n2;
	int merged[total];
	
	for(i = 0; i < n1; i++) 
	{
         merged[i] = a[i];
    }
    
    for(j = 0; j < n2; j++) 
	{
        merged[i + j] = arr[j];
    }
	
    for(i = 0; i < total-1; i++) 
	{
        for(j = 0; j < total-i-1; j++) 
		{
            if(merged[j] > merged[j+1]) 
			{
                temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }
    
	for(k=0;k<total;k++)
	{
		printf("%d",merged[k]);
	}
	
}
