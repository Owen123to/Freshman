#include<stdio.h>
#include<math.h>
int main (){
     int n;
     while(n!=0){
      scanf("%d",&n);
      int i,j,a,arr[n],total,count,flag;
      float b;
      for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
      total=n*(n-1)/2;
      for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            for(a=2;a<arr[j];a++){
                if((arr[i]%a)==0 && (arr[j]%a)==0){
                    flag=1;
                    break;
                }
                else
                    flag=0;
            }
            if(flag==0)
                count++;
        }
      }
      if(flag==0){
      b=sqrt(total*6/count);
      printf("%.6f",b);
    }else
     printf("No estimate for this data set.");
     }
}


