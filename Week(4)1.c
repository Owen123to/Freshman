#include<stdio.h>

int main() {
int number1,number2,max,min;
     scanf("%d",&number1);
     max=number1;
     min=number1;
    while ((scanf ("%d",&number2)) != EOF) {
           if (number2>max) {
            max=number2;
           }
           if (number2<min) {
            min=number2;
           }
         } printf("%d %d",max,min);
    }


