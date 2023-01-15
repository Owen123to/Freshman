#include<stdio.h>
#include<string.h>
#define SIZE 1001
int main ()
{
    char n1[SIZE], n2[SIZE], ans[SIZE+1] = {'\0'};
    scanf("%s%s", n1 ,n2);
    int s1 = strlen(n1) - 1;
    int s2 = strlen(n2) - 1;
    int s3 = 1000, carry = 0;
    while (s1 >= 0 || s2 >= 0)
    {
        if (s1 >= 0)
        {
            ans[s3] += n1[s1] - '0';
            s1--;
        }
        if (s2 >= 0)
        {
            ans[s3] += n2[s2] - '0';
            s2--;
        }
        ans[s3] += carry;
        carry = ans[s3] / 10;
        ans[s3] = ans[s3] % 10 + '0' ;
        s3--;
    }
    if (carry == 1)
        ans[s3] = '1';
    else
        s3++;
    printf("%s", ans+s3);
    return 0;
}
