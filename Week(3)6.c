#include<stdio.h>

int main(){
      int a,b;
      while ((scanf("%1d",&a)) != EOF)
          switch (a) {
            case(0):
                printf("----- ");
                break ;
            case(1):
                printf(".---- ");
                break ;
            case(2):
                printf("..--- ");
                break ;
            case(3):
                printf("...-- ");
                break ;
            case(4):
                printf ("....- ");
                break ;
            case(5):
                printf("..... ");
                break ;
            case(6):
                printf("-.... ");
                break ;
            case(7):
                printf("--... ");
                break ;
            case(8):
                printf("---.. ");
                break ;
            case(9):
                printf("----. ");
                break;
                }
}

