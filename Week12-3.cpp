#include<bits/stdc++.h>
using namespace std;
deque<int> total,temp;
deque<deque<int>> subsets;
int sum = 0;
void fix(int start,int target)
{
    for(int i = start;i < total.size();i++)
    {
        temp.push_back(total[i]);
        sum+=total[i];
        if(sum == target)
            subsets.push_back(temp);
        if(i+1<total.size())
            fix(i+1,target);
        sum-=total[i];
        temp.pop_back();
    }
}
bool FF(deque<int> aa,deque<int> bb)
{
    if(aa.size() == bb.size()) return aa<bb;
    return aa.size()<bb.size();
}
int main()
{
    int n,t,number;
    cin>>n>>t;
    for(int i = 0;i< n;i++)
    {
        cin>>number;
        total.push_back(number);
    }
    sort(total.begin(),total.end());
    fix(0,t);
    sort(subsets.begin(),subsets.end(),FF);
    for(int i = 0;i <subsets.size();i++,cout<<endl)
        for(int j = 0;j<subsets[i].size();j++)
        cout<<subsets[i][j]<<" ";
}
