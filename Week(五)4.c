#include<stdio.h>

int main(){
    int i,j,n,m,f,t,a,flag,temp,array[200],k[200]={0};
    while (scanf("%d%d",&n,&m) != EOF){
     if (n==0 && m==0){
        break ;
     }
     while(n!=0 && m!=0){
    int number[200]={0};
    for (i=0;i<m;i++) {
        scanf("%d",&array[i]);
    }
    for (j=1,t=0;j<=n;j++,t++){
        for(i=0;i<m;i++){
            if (array[i]==j){
            number[t]++;
            }
        }
    }
    for(flag=1,f=0;flag<=n;flag++,f++){
        k[f]=flag;
    }
    for(a=1;a>=0;a--){
    for(t=0,f=0;t<n;t++,f++) {
         if (number[t]>=number[t+1]) {
            temp=number[t];
            number[t]=number[t+1];
            number[t+1]=temp;
           temp=k[f];
           k[f]=k[f+1];
           k[f+1]=temp;
        }
    }
    }
   if(number[n]>m/2){
        printf("Majoritarian winner %d\n",k[n]);
        break;
    }
    else if (number[n]==number[n-1]){
        printf("No winner\n");
        break;
    }
    else if (number[n]>number[n-1]){
        printf("Plurality winner %d\n",k[n]);
        break;
    }
}
} return 0;
}





