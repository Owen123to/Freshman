#include<iostream>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    int mam = 0 , A[1000] = {0},r = 0;
    for(int i = 0;i <s.length();i++)
    {
        if(A[s[i]] != 0 && A[s[i]] >= r)
            r = A[s[i]];
        else
            mam = (i - r+1) > mam ? (i - r+1) : mam;
        A[s[i]] = i + 1;
    }
    cout << mam;
}
