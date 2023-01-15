#include<stdio.h>

int main(){
      int i,j,k,l,temp;
      while ((scanf("%d %d %d",&i,&j,&k)) != EOF) {
      for (l=i;l<=i;l--) {
            if (i%l==0 && j%l==0 && k%l==0) {
                break ;
            }
      } printf("%d\n",l);
}
}
