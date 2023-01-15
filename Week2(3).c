#include<stdio.h>

 int main(){
     int a,b,c,d,temp;
     scanf("%d%d%d%d",&a,&b,&c,&d);
      if (a>b) {
         temp=a;
         a=b;
         b=temp;
      }
     if (c>d) {
         temp=c;
         c=d;
         d=temp;
     }
    if ((d<=a) || (c>=b)) {
        printf("no overlay");
    }
    else {
        printf("overlay");
    } return 0;
 }
