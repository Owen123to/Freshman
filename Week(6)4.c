#include<stdio.h>

int main(){
    int m,n;/*m�N��ҵ{,n�N���Z*/
    int i,j,k=0,sum=0,flag,po=0,count=0;/*sum���p��ܤ֤��ή檺�H��,total�p��ǥͤH��*/
     scanf("%d%d",&m,&n);
     int total=m;
     float grade;
     int arr[m][3];/*��arr�x�}�s��ҵ{���e*/
     for (i=0;i<m;i++) {
        for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
     }
     }
     int array[n][2];/*��array�x�}�s���Z���e,�`�@��n���Z*/
     for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&array[i][j]);
        }
     }
     for(i=0;i<m;i++){/*�p�⥭��*/
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
