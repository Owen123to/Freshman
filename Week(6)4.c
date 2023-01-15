#include<stdio.h>

int main(){
    int m,n;/*m代表課程,n代表成績*/
    int i,j,k=0,sum=0,flag,po=0,count=0;/*sum為計算至少不及格的人數,total計算學生人數*/
     scanf("%d%d",&m,&n);
     int total=m;
     float grade;
     int arr[m][3];/*用arr矩陣存放課程內容*/
     for (i=0;i<m;i++) {
        for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
     }
     }
     int array[n][2];/*用array矩陣存放成績內容,總共有n比成績*/
     for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&array[i][j]);
        }
     }
     for(i=0;i<m;i++){/*計算平均*/
        for(j=0;j<n;j++){
            if(array[j][0]==arr[i][0]){
                po+=array[j][1];
                count++;
                continue;
            }
            else if (j==n-1&& array[j][0]!=arr[i][0]){
                break;
            }
            else{
                continue;
            }
        }
        grade=po/count;
        if(grade<60)
        arr[i][2]=-1;
        else
        arr[i][2]=-2;
        po=0;
        count=0;
     }
     for(i=0;i<m;i++){
        for(j=0;j<i;j++){
            if(arr[i][1]==arr[j][1]){
                total--;
                break;
            }
        }
     }
     int f[m];
     for(i=0;i<m;i++){
       if(arr[i][2]==-1){
            flag=1;
        for(j=0;j<i;j++){
            if(arr[i][1]==f[j]){
              flag=0;
              break;
            }
        }
            if(flag==1){
            sum++;
            f[k]=arr[i][1];
            k++;
            }
        }
       }
     printf("%d %d",total,sum);
}
