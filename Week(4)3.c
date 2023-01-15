#include<stdio.h>

int main() {
      int number,i,j,k,m=0,n;
      scanf("%d",&number);
      if (number>=4 && number<=32766) {
      for (i=2;i<=number-i;i++) {
            j=number-i;
           n=1;
         for (k=2;(k*k)<=i;k++) {
                if (i%k==0) {
                n=0;
                break ;
            }
         }
         for (k=2;(k*k)<=j;k++) {
               if (j%k==0){
                n=0;
                break ;
               }
                }
      if (n==1) {
              m++;
         }
      }
} printf("%d",m);
}

