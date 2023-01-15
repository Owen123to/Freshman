#include<stdio.h>

int main() {
      int array[10],temp,i,j;
      for (i=0;i<10;i++) {
        scanf("%d ",&(array[i]));
      }
        for (i=8;i>=0;i--) {
          for(j=0;j<=i;j++) {
          if (array[j]>array[j+1]) {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
      }
      }
      for (i=0;i<10;i++) {
        printf("%d ",array[i]);
      }
}

