#include<stdio.h>

int main()
{
    char a[19][19];
    int flag[5] = {0};
    for(int i = 0 ;i < 19;i++)
        for(int j = 0;j < 19;j++)
            scanf("%c",&a[i][j]);
    for(int i = 0;i < 19; i++)
    {
        for(int j = 0;j < 19;j++)
        {
            flag[0] = flag[1] = flag[2] = flag[3] = flag[4] = 0;
            if(a[i][j] == 'O' || a[i][j] == 'X')
            {
                for(int k = 1;k < 5;k++)
                {
                    if(a[i][j+k] != a[i][j])
                        flag[0] = 1;
                    if(a[i+k][j] != a[i][j])
                        flag[1] = 1;
                    if(a[i+k][j+k] != a[i][j])
                        flag[2] = 1;
                    if(a[i+k][j-k] != a[i][j])
                        flag[3] = 1;
                }
                if (flag[0] == 0 || flag[1] == 0 || flag[2] == 0 || flag[3] == 0)
                {
                    if(a[i][j] == 'O')
                        printf("White");
                    else
                        printf("Black");
                    flag[4] = 1;
                    break;
                }
            }
        }
        if(flag[4] == 1)
            break;
    }
    if(flag[4] == 0)
        printf("No winner");
    return 0;
}
