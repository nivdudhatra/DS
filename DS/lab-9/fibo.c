#include<stdio.h>

int fibo(int n)
{
	if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void main()
{
	int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci number = %d\n", fibonacci(n));

    
}
