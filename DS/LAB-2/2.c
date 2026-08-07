#include<stdio.h>
void main()
{
	int n,index,i;
	
	
	printf("Enter size of arr : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for (i=0;i<n;i++)
	{
		printf("Enter number : ");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter index : ");
	scanf("%d",&index);
	
	
	
	if(index < 0 || index >= n) 
	{ 
        printf("Invalid index\n"); 
    } 
    else
	{ 
        
        for (i = index; i < n - 1; i++)
		{ 
            arr[i] = arr[i + 1]; 
        } 
        n--; 
	}
	for (i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}





