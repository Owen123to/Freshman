#include <bits/stdc++.h>
using namespace std;
const int maxn=10;
int n;
char pos[maxn][maxn][maxn];
char view[6][maxn][maxn];
char read_char()
{
    char ch;
    for(;;)
    {
         ch=getchar();
          if((ch>='A'&&ch<='Z')||ch=='.')
             return ch;
     }
 }
  void get(int k,int i,int j,int len,int &x,int &y,int &z)//第k個視圖中，第i行j列深度為len對應立方體中的坐標(x, y, z);
  {
     if(k==0)//前
      {
          x=len;
         y=j;
          z=i;
     }
      if(k==1)//左
    {
          x=n-1-j;
          y=len;
          z=i;
     }
     if(k==2)//後
    {
         x=n-1-len;
         y=n-1-j;
        z=i;
    }
     if(k==3)//右
    {
        x=j;
        y=n-1-len;
         z=i;
     }
   if(k==4)//頂
     {
        x=n-1-i;
        y=j;
         z=len;
     }
    if(k==5)//底
    {
         x=i;
        y=j;
         z=n-1-len;
     }
 }
 int main()
 {
     while(cin>>n)
   {
        if(n==0)
            break;
        for(int i=0;i<n;i++)//第i行
           for(int k=0;k<6;k++)//第j面
                 for(int j=0;j<n;j++)//第k列
                    view[k][i][j]=read_char();
         for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int k=0;k<n;k++)
                     pos[i][j][k]='#';//第i行j列k深的單位立方體初始化為不存在
        for(int k=0;k<6;k++)
           for(int i=0;i<n;i++)
                 for(int j=0;j<n;j++)
                     if(view[k][i][j]=='.')
                         for(int p=0;p<n;p++)//深度
                         {
                            int x,y,z;
                             get(k,i,j,p,x,y,z);
                             pos[x][y][z]='.';//無單位之立方體標誌為.
                       }
        for(;;)
       {
            bool done=true;
            for(int k=0;k<6;k++)//第j面
                for(int i=0;i<n;i++)//第i行
                    for(int j=0;j<n;j++)//第j列
                        if(view[k][i][j]!='.')
                             for(int p=0;p<n;p++)//深度掃描
                             {
                                int x,y,z;
                                get(k,i,j,p,x,y,z);
                               if(pos[x][y][z]=='.')//若該單位立方體不存在,深度加1
                                     continue;
                               if(pos[x][y][z]=='#')//若該單位立方體存在但為初始狀態,則塗上顏色
                                {//(主要是為了判斷不同面顏色是否相同,若相同則存在立方體,否則不存在
                                  pos[x][y][z]=view[k][i][j];
                                   break;
                               }
                                if(pos[x][y][z]==view[k][i][j])//存在
                                   break;
                             pos[x][y][z]='.';//不存在
                               done=false;
                           }
            if(done)
               break;
        }
       int ans=0;
       for(int i=0;i<n;i++)
          for(int j=0;j<n;j++)
               for(int k=0;k<n;k++)
                    if(pos[i][j][k]!='.')
                        ans++;
        cout<<"Maximum weight: "<<ans<<" gram(s)"<<endl;
}
    return 0;
}
