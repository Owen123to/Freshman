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
  void get(int k,int i,int j,int len,int &x,int &y,int &z)//��k�ӵ��Ϥ��A��i��j�C�`�׬�len�����ߤ��餤������(x, y, z);
  {
     if(k==0)//�e
      {
          x=len;
         y=j;
          z=i;
     }
      if(k==1)//��
    {
          x=n-1-j;
          y=len;
          z=i;
     }
     if(k==2)//��
    {
         x=n-1-len;
         y=n-1-j;
        z=i;
    }
     if(k==3)//�k
    {
        x=j;
        y=n-1-len;
         z=i;
     }
   if(k==4)//��
     {
        x=n-1-i;
        y=j;
         z=len;
     }
    if(k==5)//��
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
        for(int i=0;i<n;i++)//��i��
           for(int k=0;k<6;k++)//��j��
                 for(int j=0;j<n;j++)//��k�C
                    view[k][i][j]=read_char();
         for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int k=0;k<n;k++)
                     pos[i][j][k]='#';//��i��j�Ck�`�����ߤ����l�Ƭ����s�b
        for(int k=0;k<6;k++)
           for(int i=0;i<n;i++)
                 for(int j=0;j<n;j++)
                     if(view[k][i][j]=='.')
                         for(int p=0;p<n;p++)//�`��
                         {
                            int x,y,z;
                             get(k,i,j,p,x,y,z);
                             pos[x][y][z]='.';//�L��줧�ߤ���лx��.
                       }
        for(;;)
       {
            bool done=true;
            for(int k=0;k<6;k++)//��j��
                for(int i=0;i<n;i++)//��i��
                    for(int j=0;j<n;j++)//��j�C
                        if(view[k][i][j]!='.')
                             for(int p=0;p<n;p++)//�`�ױ��y
                             {
                                int x,y,z;
                                get(k,i,j,p,x,y,z);
                               if(pos[x][y][z]=='.')//�Y�ӳ��ߤ��餣�s�b,�`�ץ[1
                                     continue;
                               if(pos[x][y][z]=='#')//�Y�ӳ��ߤ���s�b������l���A,�h��W�C��
                                {//(�D�n�O���F�P�_���P���C��O�_�ۦP,�Y�ۦP�h�s�b�ߤ���,�_�h���s�b
                                  pos[x][y][z]=view[k][i][j];
                                   break;
                               }
                                if(pos[x][y][z]==view[k][i][j])//�s�b
                                   break;
                             pos[x][y][z]='.';//���s�b
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
