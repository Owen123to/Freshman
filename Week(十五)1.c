#include<stdio.h>
#include<string.h>
void mul (int x , char *ptr)
{
    int base = 1, temp1 = 0 , temp2 = 0 , i , j ,y;
    char change1[1000], buf;
    y = x - 1;
    while(ptr[y] == ' ')
        y --;
    while(ptr[y] >= '0' && ptr[y] <= '9')
    {
        temp1 += base * (ptr[y] - '0');
        base *= 10;
        y --;
    }
    i = y + 1;
    y = x + 1;
    while(ptr[y] < '0' || ptr[y] > '9')
        y ++;
    while(ptr[y] >= '0' && ptr[y] <= '9')
    {
        temp2 = temp2 * 10 + (ptr[y] - '0');
        y ++;
    }
    j = y;
    temp1 *= temp2;
    sprintf(change1, "%d", temp1);
    strcpy(ptr + i, change1);
    strcat(ptr, ptr + j);
}
void divid (int x , char *ptr)
{
    int base = 1, temp1 = 0 , temp2 = 0 , i , j ,y;
    char change1[1000], buf;
    y = x - 1;
    while(ptr[y] == ' ')
        y --;
    while(ptr[y] >= '0' && ptr[y] <= '9')
    {
        temp1 += base * (ptr[y] - '0');
        base *= 10;
        y --;
    }
    i = y + 1;
    y = x + 1;
    while(ptr[y] < '0' || ptr[y] > '9')
        y ++;
    while(ptr[y] >= '0' && ptr[y] <= '9')
    {
        temp2 = temp2 * 10 + (ptr[y] - '0');
        y ++;
    }
    j = y;
    temp1 /= temp2;
    sprintf(change1, "%d", temp1);
    strcpy(ptr + i, change1);
    strcat(ptr, ptr + j);
}

int main()
{
    char expr[1000] ;
    int  ans = 0;
    gets(expr);
    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] == '*' || expr[i] == '/')
        {
            if (expr[i] == '*')
                mul(i , expr);
            if (expr[i] == '/')
                divid(i , expr);
        }
    }
    char index = '+';
    int temp = 0;
    for (int i = 0; expr[i] != '\0' ;i++)
    {
        if (expr[i] == ' ')
            continue;
        if (expr[i] <= '9' && expr[i] >= '0')
           temp = temp * 10 + expr[i] - '0';
        else
        {
            if (index == '+')
                ans += temp;
            else
                ans -= temp;
            temp = 0;
            index = expr[i];
        }
    }
    if (index == '+')
        ans += temp;
    else
        ans -= temp;
    printf("%d",ans);
}
