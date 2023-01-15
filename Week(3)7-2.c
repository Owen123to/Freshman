#include<stdio.h>

int main(){
      int number;
      scanf("%d",&number);
      float a=0.0,b,mid,temp;
      b=number;
       for (;;) {
        mid=(a+b)/2;
        b=number;
      if (mid*mid>b) {
        temp=b;
        b=mid;
        mid=temp;
      }
      if (mid*mid<=b) {
        temp=a;
        a=mid;
        mid=temp;
      }
    if (b-a<0.00001) {
        break ;
    }
     } printf("%.4f",b);
}


