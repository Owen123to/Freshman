#include<stdio.h>

int main(){
      int a,b;
      while ((scanf("%d",&a)) != EOF) {
            if (a==0) break;
            printf ("%d =",a);
            for (b=2;b <= a;b++)
             {
                while (b != a)
                 {
                    if (a % b==0)
                    {
                    printf(" %d *",b);
                    a=a/b;
                    }
                     else {
                                 break ;
                                }
            }     if (b==a) {
                   printf(" %d\n",b);
                   break;
                   }
            }
} return 0;
}
