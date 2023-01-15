#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum;
    cin>>sum;
    while(sum--)
    {
        int day,number,countt=0;
        cin>>day>>number;
        int party[number];
        for(int i= 0;i<number;i++)
            cin>>party[i];
        int r[day+1] ={0};
        for(int j=1;j <= day;j++)
            for(int i = 0;i <number;i++)
            if(j%party[i] == 0&&j%7!=0&&j%7!=6)
            r[j] =1;
        for(int i = 0;i<day+1;i++)
            if(r[i] ==1)
            countt++;
        cout<<countt<<endl;
    }
}
