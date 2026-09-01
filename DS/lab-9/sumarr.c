#include <stdio.h> 

int sumarr(int arr[], int n) { 
    if (n == 0) 
        return 0; 
    
    return arr[n-1] + sumarr(arr, n-1); 
} 

void main() { 
    int n, i; 
    printf("Enter n: "); 
    scanf("%d", &n); 
    
    int arr[n]; 
    for(i = 0; i < n; i++) { 
        printf("Enter element of array: "); 
        scanf("%d", &arr[i]); 
    } 
    
    int total = sumarr(arr, n); 
    printf("SUM IS: %d", total); 
}

