#include<stdio.h>

int main(){
      int array[200],i,j,number,temp;
      float sum=0;
      scanf("%d ",&number);
      for (i=0;i<number;i++) {
        scanf("%d",&(array[i]));
      }
        for (i=number-2;i>=0;i--) {
          for(j=0;j<number-1;j++) {
          if (array[j]>array[j+1]) {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
      }
      }
      for (i=3;i<number-3;i++) {
       sum+=array[i];
      }
      printf("%.2f",sum/(number-6));
}

