#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin>>number;
    while(number--)
    {
        long int x,y,fix_x,fix_y;
        cin>>x>>y;
        fix_x = (x+y)/2;
        fix_y = x - fix_x;
        if((x+y)%2==0 &&fix_x>=0&&fix_y>=0)
            cout<<fix_x<<" "<<fix_y<<endl;
        else
            cout<<"impossible"<<endl;
     }
}
