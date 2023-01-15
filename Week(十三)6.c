#include<stdio.h>

int main()
{
    char expr[1000];
    int temp = 0, ans = 0;
    char sign = '+';
    gets(expr);
    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] == ' ')
            continue;
        if (expr[i] >= '0' && expr[i] <= '9')
        {
            temp *= 10;
            temp += expr[i] - '0';
        }
        else
        {
            if (sign == '+')
                ans += temp;
            else
                ans -= temp;
            temp = 0;
            sign = expr[i];
        }
    }
    if (sign == '+')
        ans += temp;
    else
        ans -= temp;
    printf("%d",ans);
    return 0;
}
