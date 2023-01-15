#include<stdio.h>

void recurs (int  up , int down ,int left , int right ,int k , int l ,int ptr[k][l] , int total)
{
      int i;
      for ( i = left ;i <= right; i++) {
            printf("%d ", ptr[up][i]);
            total++;
        }
        up++;
        if (total == k*l)
            return ;
        for ( i = up; i <= down; i++) {
            printf("%d ", ptr[i][right]);
            total++;
        }
        right--;
        if (total == k*l)
            return;
        for ( i = right ; i >= left; i--) {
            printf("%d ", ptr[down][i]);
            total++;
        }
        down--;
        if (total == k*l)
            return ;
        for ( i = down; i >= up; i--) {
            printf("%d ", ptr[i][left]);
            total++;
        }
        left++;
        if(total != k*l)
            return recurs(up , down , left , right , k , l , ptr ,total);
        else
            return ;
}
int main(){
     int n,m;
     scanf("%d%d",&n,&m);
     int arr[n][m],i,j , a = n , b = m , c = 0 , d = 0 , sum = 0;
     for (i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
     recurs(c ,n-1, d,m-1, a ,b ,arr, sum);
     return 0;
}
