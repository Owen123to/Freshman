#include<stdio.h>

int main ()
{
    int siz,row=0,col=0,min,min2,count;
    scanf("%d",&siz);
    int maz[siz][siz];
    for(int i = 0;i < siz;i++)
        for(int j = 0;j < siz;j++)
        scanf("%d",&maz[i][j]);
    if(maz[0][0] == 1)
        printf("No");
    else
    {
        maz[0][0]=2;
        while(1)
        {
            min = 100;
            min2 = 0;
            count = 0;
            if(row-1 >= 0 && maz[row-1][col] <= min && maz[row-1][col] != 1 && maz[row-1][col]<100)
            {
                min = maz[row-1][col];
                min2 = 4;
                count++;
            }
            if(col-1 >= 0 && maz[row][col-1]<=min && maz[row][col-1] != 1 && maz[row][col-1]<100)
            {
                min = maz[row][col-1];
                min2 = 3;
                count++;
            }
            if(row+1 < siz && maz[row+1][col]<=min && maz[row+1][col] != 1 && maz[row+1][col] < 100)
            {
                min = maz[row+1][col];
                min2 = 2;
                count++;
            }
            if(col+1 < siz && maz[row][col+1] <= min && maz[row][col+1] != 1 && maz[row][col+1] < 100)
            {
                min = maz[row][col+1];
                min2 = 1;
                count++;
            }
            if(count == 0)
            {
                printf("No");
                break;
            }
            switch(min2)
            {
            case 1:
                maz[row][col+1]+=2;
                col+=1;
                break;
            case 2:
                maz[row+1][col]+=2;
                row+=1;
                break;
            case 3:
                maz[row][col-1]+=2;
                col-=1;
                break;
            case 4:
                maz[row-1][col]+=2;
                row-=1;
                break;
            }
            if(row == siz-1 && col == siz-1)
            {
                printf("Yes");
                break;
            }
        }
    }
    return 0;
}
