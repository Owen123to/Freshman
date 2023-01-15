#include<bits/stdc++.h>
using namespace std;
class city
{
public:
    char bins[5],waste[5];
    void bubble ()
    {
        for(int i = 1;i < 5;i++)
            for(int j = 0; j < 5 - i;j++)
            if(bins[j] > bins[j+1])
        {
            char temp = bins[j];
            bins[j] = bins[j+1];
            bins[j+1] = temp;
            temp = waste[j];
            waste[j] = waste[j+1];
            waste[j+1] = temp;
        }
    }
};
int main()
{
    string ss;
    city aa[100];
    int countt = 0;
    while(getline(cin,ss)&&ss[0] != '#')
    {
        if(ss[0] == 'e')
        {
            for(int i = 0;i <countt;i++)
                aa[i].bubble();
            int large = 1000,index = 0,ans = 0;
            for(int i = 0;i < countt;i++)
            {
                index = 0;
                for(int j = 0;j < countt ; j++)
                    for(int k =  0;k< 5;k++)
                    if(aa[i].waste[k] != aa[j].waste[k])
                    index++;
                if(large>index)
                {
                    large = index;
                    ans = i +1;
                }
            }
            cout<<ans<<endl;
            countt = 0;
        }
        else
        {
            aa[countt].bins[0] = ss[0];
            aa[countt].waste[0] = ss[2];
            aa[countt].bins[1] = ss[4];
            aa[countt].waste[1] = ss[6];
            aa[countt].bins[2] = ss[8];
            aa[countt].waste[2] = ss[10];
            aa[countt].bins[3] = ss[12];
            aa[countt].waste[3] = ss[14];
            aa[countt].bins[4] = ss[16];
            aa[countt].waste[4] = ss[18];
            countt ++;
        }
    }
}
