#include<stdio.h>

int main(){
     int  i,j,k;/*i為幾列,j為幾行,k為有多少數不是0*/
     int g,h,number,a,b,c,x,z;
     scanf("%d%d%d",&i,&j,&k);
     int arr[i][j];
     for (x=0;x<i;x++){/*先把所有數=0*/
        for(z=0;z<j;z++){
            arr[x][z]=0;
        }
     }
     for (number=0;number<k;number++) {/*把給的質放入*/
     scanf("%d%d%d",&a,&b,&c);
     arr[a][b]=c;
     }
     for(g=0;g<i;g++) {/*映出*/
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
