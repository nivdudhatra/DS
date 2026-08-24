#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define n 50

int s[n];
int top=-1;

void push(int x)
{
    if(top==n-1)
    {
        printf("Overflow");
        return;
    }

    top++;
    s[top] = x;
}

int pop()
{
    int x;

    if(top==-1)
    {
        return 0;
    }

    x =s[top];
    top--;

    return x;
}



void evaluteprefix(char s[])
{	
	int i;
	for (i=0;i<strlen(s);i++)
	{
		if(isdigit(s[i]))
		{
			push(s[i]-'0');
		}
		else
		{
			int op1 = pop();
			int op2 = pop();
			
			
			switch(s[i])
			{
				case '+':
					push(op1+op2);
					break;
					
				case '-':
					push(op1-op2);
					break;
				
				case '*':
					push(op1*op2);
					break;
					
				case '/':
					push(op1/op2);
					break;
					
				case '^':
					push((int)pow(op1,op2));
					break; 
					
			}
			 
		}
	}
}

void main ()
{
	char str[50];
	printf("Enter exp:");
	scanf("%s",str);
	
	
	evaluteprefix(strrev(str));
	
	int ans = pop();
	
	printf("Answer is %d",ans);
	
}

