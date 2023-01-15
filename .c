#include <stdio.h>

int main(){
     float  kilometer=0.0,
              time=0.0,
              speed=0.0;

     scanf("%f%f",&kilometer,&time);
     speed=kilometer/time;
     printf("%f",speed);
     return 0;
}
