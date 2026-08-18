#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    char stack[100];
    
    int top=-1;
    int i,n;
    int flag=1;

    printf("Enter string: ");
    scanf("%s", str);

    n = strlen(str);

    for(i=0;i<n;i++)
    {
        top++;
        stack[top]=str[i];
    }

    for(i=0;i<n;i++)
    {
        if(str[i]!=stack[top])
        {
            flag=0;
            break;
        }

        top--;
    }

    if(flag==1)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

}
