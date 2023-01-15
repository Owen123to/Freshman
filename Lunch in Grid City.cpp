#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum  = 0,x[100],y[100];
    cin>>sum;
    while(sum--)
    {
        int S,A,F;
        cin>>S>>A>>F;
        for(int i = 0;i< F;i++)
            cin>>x[i]>>y[i];
        sort(x,x+F);
        sort(y,y+F);
        cout<<"(Street: "<<x[(F-1)/2]<<", Avenue: "<<y[(F-1)/2]<<")"<<endl;
    }
}
