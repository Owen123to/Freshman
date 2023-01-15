#include<stdio.h>
#include<string.h>

int G_f (int x , char *ptr)
{
    int temp1 = 0 , temp2 = 0;
    for (; ptr[x] >= '0' && ptr[x] <= '9'; x++)
    {
        temp1 *= 10;
        temp1 += ptr[x] - '0';
    }
    while (1)
    {
        if (ptr[x] == ',')
        {
            ptr[x] = ' ';
            for ( x = x+1 ; ptr[x] >= '0' && ptr[x] <='9' ; x++)
            {
            temp2 *= 10;
            temp2 += ptr[x] -'0';
            }
            return (temp1 + temp2);
        }
        else
            x++;
    }
}
int F_f(int y , char *ptr)
{
    int temp3 = 0;
    for ( ; ptr[y] >= '0' && ptr[y] <= '9' ; y++)
      {
        temp3 *= 10;
        temp3 += ptr[y] - '0';
      }
      return ++temp3;
}
int main()
{
    char der[1000], i = 'F', j = 'G', a = '(' , b = ')';
    gets(der);
    int str = strlen(der);
    int ans = 0;
    for (int t = str; t >= 0 ; t--)
    {
        if (der[t] == a)
        {
            if (der[t-1] == j)
            {
                ans += G_f(t+1 , der);
            }
            else if (der[t-1] == i)
            {
                if (der[t+1] >= '0' && der[t+1] <= '9')
                {
                    ans += F_f(t+1 , der);
                }
                else
                ans++;
            }
        }
    }
    printf("%d",ans);
}


