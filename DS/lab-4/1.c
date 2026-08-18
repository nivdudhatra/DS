#include<stdio.h>
char stack[10];
int top = -1;

void push(int x)
{
	if(top>=9)
	{
		printf("Stack is overflow");
	}
	else
	{
		top++;
		stack[top] = x;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Stack is underflow");
	}
	else
	{
		top--;
		x = stack[top];
	}
}

void main()
{
	
}
