#include<stdio.h>

int main(){
    int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
     if ( a + b > c && a*a+b*b==c*c) {
        printf("right triangle");
    } else if ( a + b > c && a*a+b*b>c*c) {
        printf("acute triangle");
    } else if ( a + b > c && a*a + b * b < c * c){
        printf("obtuse triangle");
    } else {
        printf("can not construct");
    }
    return 0;
    }
