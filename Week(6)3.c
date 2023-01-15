#include<stdio.h>
void space(sum,all) {
    if (sum<all){
        printf(" ");
    }
}
int main(){
     int n,m;
     scanf("%d%d",&n,&m);
     int arr[n][m],i,j;
     for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
     }/*把給的矩陣輸入*/
     /*先右後下再左再上*/
    int up=0,left=0,down=n-1,right=m-1;
    int k, sum=0;
    while (up <= down && left <= right) {
        for (k = left;k <= right;k++) {
            printf("%d", arr[up][k]);
            sum++;
            space(sum, m*n);
        }
        up++;
        if (sum == m*n)
            break;
        for (k = up; k<=down;k++) {
            printf("%d", arr[k][right]);
            sum++;
            space(sum, m*n);
        }
        right--;
        if (sum==m*n)
            break;
        for (k = right ; k >= left; k--) {
            printf("%d", arr[down][k]);
            sum++;
            space(sum, m*n);
        }
        down--;
        if (sum == m*n)
            break;
        for (k = down; k >= up; k--) {
            printf("%d", arr[k][left]);
            sum++;
            space(sum, m*n);
        }
        left++;
        if (sum == m*n)
            break;
    }
}
