#include <stdio.h>


int findLargest(int arr[], int n) {
   
    if (n == 1) {
        return arr[0];
    }
    
  
    int max = findLargest(arr, n - 1);
    

    if (arr[n - 1] > max) {
        return arr[n - 1];
    } else {
        return max;
    }
}

void main() {
    int n,i;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    int arr[n];
    
    for(i=0;i<n;i++)
    {
    	printf("Enter  element of array:");
    	scanf("%d",&arr[i]);
	}
    
    int max = findLargest(arr, n);
    
    printf("The largest element in the array is: %d\n", max);
    
 
}

