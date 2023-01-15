#include<stdio.h>

int main(){
     int a;
     scanf("%d", &a);
     int b,c,d,e;
     b=a/1000;//b是1234的1
     c=a%1000/100;//c是1234的2
     d=a%100/10;//d是1234的3
     e=a%10;//e是1234的4
     printf("%d%d%d%d",e,d,c,b);
     return 0;
}

