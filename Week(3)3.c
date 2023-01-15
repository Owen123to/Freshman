#include<stdio.h>

int main(){
      int a,b,c;
      while ((scanf("%d",&a)) != EOF) {
        if (a==0) break;
        if (a==1) printf("not a prime\n");
        else { c=1;
        for (b=2;b<a;b++) {
               if (a%b==0) {
                    c=0;
                    printf("not a prime\n");
                    break ;
                }
     }  if (c==1) {
     printf("prime\n");
     }
      }
} return 0;
}





