#include<stdio.h>

void aaa(int *ptr,int n,int m)
{
    printf("%d ",*ptr);
    *ptr=-1;
    for(int i=0; i+1<m && *(ptr+1) != -1; i++)
    {
        printf("%d ",*(++ptr));
        *ptr=-1;
    }
    for(int i=m-1;i+m<n*m&&*(ptr+m)!=-1;i+=m)
    {
        printf("%d ",*(ptr+=m));
        *ptr=-1;
    }
    for(;*(ptr-1)!=-1;)
    {
        printf("%d ",*(--ptr));
        *ptr=-1;
    }
    for(;*(ptr-m)!=-1;)
    {
        printf("%d ",*(ptr-=m));
        *ptr=-1;
    }
    if(*(ptr+1)!=-1)
        aaa(ptr+1,n,m);
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int num[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&num[i][j]);
    aaa(num,n,m);
    return 0;
}
