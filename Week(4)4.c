#include<stdio.h>

int main(){
      int i,j,k,f,m;
      scanf("%d %d %d",&i,&j,&k);
      for (f=j,m=1;;f=f+j,m=m+1) {
          if (f>=i) {
                printf("%d",m);
            break ;
          } else if (j<=k){
          printf("-1");
          break ;
          } else {
          f=f-k ;
          }
          }
}
