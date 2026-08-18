#include<stdio.h>
void main()
{
	int n,index,number,i;
	
	
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
	
	printf("Enter number you want to change : ");
	scanf("%d",&number);
	
	if (index < 0 || index > n) { 
        printf("Invalid index\n");
    } 
	else 
	{
       
        for (i = n; i > index; i--) { 
            arr[i] = arr[i - 1];
        }
        
        
        arr[index] = number;
        n++; 
	}
	for (i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

