#include<stdio.h>

int main(){
     int a;
     scanf("%d", &a);
     int b,c,d,e;
     b=a/1000;//b�O1234��1
     c=a%1000/100;//c�O1234��2
     d=a%100/10;//d�O1234��3
     e=a%10;//e�O1234��4
     printf("%d%d%d%d",e,d,c,b);
     return 0;
}

