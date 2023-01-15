#include <bits/stdc++.h>
using namespace std;
string fix (int eye)
{
    if(eye == 1)
        return "1";
    string s = "1";
    while(--eye)
    {
        int i = 0,eyes = s.length();
       string str = "";
        while(i < eyes)
        {
            int countt = 0;
            char aa = s[i];
            while(i < eyes && aa == s[i])
            {
                countt++;
                i++;
            }
            str += to_string(countt);
            str += aa;
        }
        s = str;
    }
    return s;
}
int main()
{
    int num;
    while(cin>>num)
        cout<<fix(num)<<endl;
}
