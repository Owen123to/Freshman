#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum;
    cin>>sum;
    while(sum--)
    {
        int number,ans= 0;
        cin>>number;
        float aa[number][4];
        for(int i = 0;i<number;i++)
            for(int j = 0;j<4;j++)
            cin>>aa[i][j];
        for(int i = 0;i<number;i++)
            for(int j = i+1;j<number;j++)
        {
            float cross1 = (aa[j][0] - aa[i][0])*(aa[j][3] - aa[i][1]) - (aa[j][2] - aa[i][0])*(aa[j][1] - aa[i][1]);
            float cross2 = (aa[j][0] - aa[i][2])*(aa[j][3] - aa[i][3]) - (aa[j][2] - aa[i][2])*(aa[j][1] - aa[i][3]);
            float cross3 = (aa[i][0] - aa[j][0])*(aa[i][3] - aa[j][1]) - (aa[i][2] - aa[j][0])*(aa[i][1] - aa[j][1]);
            float cross4 = (aa[i][0] - aa[j][2])*(aa[i][3] - aa[j][3]) - (aa[i][2] - aa[j][2])*(aa[i][1] - aa[j][3]);
            if(cross1*cross2<=0 && cross3*cross4<=0)
                if(cross1==0&&cross2==0&&cross3==0&&cross4==0)
            {
                if((aa[j][0]-aa[i][0]) * (aa[j][0]-aa[i][2])<0||(aa[j][2]-aa[i][0]) * (aa[j][2]-aa[i][2])<0||(aa[j][1]-aa[i][1]) * (aa[j][1]-aa[i][3])<0||(aa[j][3]-aa[i][1]) * (aa[j][3]-aa[i][3])<0)
                    ans++;
            }
            else
                ans++;
        }
        cout<<number+ans*2<<endl;
        cout<<endl;
    }
}
