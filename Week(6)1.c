#include<stdio.h>

int main(){
     int  i,j,k;/*i���X�C,j���X��,k�����h�ּƤ��O0*/
     int g,h,number,a,b,c,x,z;
     scanf("%d%d%d",&i,&j,&k);
     int arr[i][j];
     for (x=0;x<i;x++){/*����Ҧ���=0*/
        for(z=0;z<j;z++){
            arr[x][z]=0;
        }
     }
     for (number=0;number<k;number++) {/*�⵹�����J*/
     scanf("%d%d%d",&a,&b,&c);
     arr[a][b]=c;
     }
     for(g=0;g<i;g++) {/*�M�X*/
      for(h=0;h<j;h++){
        if(h==(j-1)){
        printf("%d \n",arr[g][h]);
        break ;
     } else {
      printf("%d ",arr[g][h]);
     }
     }
 }
}
