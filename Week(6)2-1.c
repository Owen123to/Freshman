#include<stdio.h>
int main(){
     int n,a=1;
     scanf("%d",&n);/*n*n個陣列*/
     int arr[n+2][n+2],i,j;
     for (i=0;i<n+2;i++){/*設圍牆*/
        arr[0][i]=1;
        arr[n+1][i]=1;
     }
     for (j=1;j<n+1;j++){
        arr[j][0]=1;
        arr[j][n+1]=1;
     }
    for (i=1;i<=n;i++){/*輸入n*n之內的數值*/
        for (j=1;j<=n;j++){
            scanf("%d",&arr[i][j]);
            }
        }
    arr[1][1]=2;
    while (a!=0){
        a=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(arr[i][j]==2){
                    if(arr[i+1][j]==0){
                        arr[i+1][j]=2;
                        a=1;
                    }
                    if(arr[i-1][j]==0){
                        arr[i-1][j]=2;
                        a=1;
                    }
                    if(arr[i][j+1]==0){
                        arr[i][j+1]=2;
                        a=1;
                    }
                    if(arr[i][j-1]==0){
                        arr[i][j-1]=2;
                        a=1;
                    }
                }
            }
        }
    }
    if(arr[n][n]==2)
        printf("Yes");
    else
        printf("No");
}



