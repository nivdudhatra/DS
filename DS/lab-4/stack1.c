#include<stdio.h>
#define n 10

int s[n];
int top=-1;

void push(int x)
{
	if(top==n-1)
	{
		printf("Stack is Overflow");
		return ;
	}
	else{
		top++;
		s[top]=x;
		printf("%d pushed\n",x);
	}
}


void pop()
{
	if(top==-1)
	{
		printf("Stack is Empt");
		return ;
	}
	else
	{
		int el;
		el=s[top];
		printf("\n%d poped\n",el);
		top--;
	}
}

display()
{
	int i;
	
	if(top==-1)
	{
		printf("Stack is Empt");
	}
	else
	{
		printf("Elements in Stack Are :\n");
		for(i=top;i>=0;i--)
		{
			printf("%d ",s[i]);
		}
	}
}


void peep()
{
	if(top==-1)
	{
		printf("Stack is Empt");
		return ;
	}
	else
	{
		printf("\n%d peek\n",s[top]);
	}
}

void change(int i,int x)
{
	if(top-i+1<=-1)
	{
		printf("Not Available");
		return;
	}
	else{
		s[top-i+1]=x;
	}
}

void main()
{
	int choice,x,i;
	
	printf("Choice 1 for Push\nChoice 2 for Pop\nChoice 3 for Peep\nChoice 4 for Change\nChoice 5 for Display");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter el:");
			scanf("%d",&x);
			push(x);    
		case 2:
			pop();
		case 3:
			peep();	
		case 4:
			printf("Enter index:");
			scanf("%d",&i);
			printf("Enter el:");
			scanf("%d",&x);
			change(i,x);
		case 5:
			display();			
	}
}
