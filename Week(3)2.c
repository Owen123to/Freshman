#include<stdio.h>

int main(){
    int a,number;
    scanf("%d",&a);
      for (number=1;number<=a;number++){
            if (a % number==0) {
                printf("%d ",number);
            }
      } return 0;
}
