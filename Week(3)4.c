#include<stdio.h>

int main(){
      int a,b,i,j;
      scanf("%d",&a);
      for (i=1;i<=a;i++) {
             for (b=1;b<=a-i;b++) {
                printf(" ");
                }
             for (j=1;j<=i;j++) {
                    if (j<i) {
                     printf("* ");
                   } else {
                       printf("*");
               }
             }
              while (i < a) {
                printf("\n");
                break;
              }
      } return 0;
}

