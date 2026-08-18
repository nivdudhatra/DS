#include<stdio.h>
#include<string.h>

#define n 50

char s[n];
int top = -1;

void push(char x)
{
    top++;
    s[top] = x;
}

char pop()
{
    char x;

    x = s[top];
    top--;

    return x;
}

int priority(char x)
{
    if(x == '+' || x == '-')
        return 1;

    if(x == '*' || x == '/')
        return 2;

    if(x == '^')
        return 3;

    return 0;
}

void reverse(char str[])
{
    int i, j;
    char temp;

    i = 0;
    j = strlen(str) - 1;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

void infixToPrefix(char infix[], char prefix[])
{
    char temp;
    int i, j = 0;

    reverse(infix);

    for(i = 0; infix[i] != '\0'; i++)
    {
        if(infix[i] == '(')
            infix[i] = ')';

        else if(infix[i] == ')')
            infix[i] = '(';
    }

    top = -1;

    for(i = 0; infix[i] != '\0'; i++)
    {
        if((infix[i] >= 'A' && infix[i] <= 'Z') ||
           (infix[i] >= 'a' && infix[i] <= 'z'))
        {
            prefix[j] = infix[i];
            j++;
        }

        else if(infix[i] == '(')
        {
            push(infix[i]);
        }

        else if(infix[i] == ')')
        {
            while(s[top] != '(')
            {
                prefix[j] = pop();
                j++;
            }

            pop();
        }

        else
        {
            while(top != -1 &&
                  priority(s[top]) >= priority(infix[i]))
            {
                prefix[j] = pop();
                j++;
            }

            push(infix[i]);
        }
    }

    while(top != -1)
    {
        prefix[j] = pop();
        j++;
    }

    prefix[j] = '\0';

    reverse(prefix);
}

int main()
{
    char infix[n];
    char prefix[n];

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    infixToPrefix(infix, prefix);

    printf("Prefix = %s", prefix);

    return 0;
}
