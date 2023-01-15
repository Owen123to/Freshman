#include<stdio.h>

void recurs (int *p)
{

}
int main()
{
    int number;
    scanf("%d",&number);
    int a[number+2][number+2] ;
    for(int i = 0;i < number + 2;i++)
        for(int j = 0;j < number + 2;j++)
           a[i][j] = 0;
    for (int i = 1;i < number + 1;i++)
        for(int j = 1;j < number + 1;j++)
        scanf("%d",&a[i][j]);
    if (a[1][1] == 2)
        printf("No");
    else
    {
        recurs(a);
    }
}
