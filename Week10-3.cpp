#include<bits/stdc++.h>
using namespace std;
class Company
{
    private:
        int n=0;
        char *airline=NULL;
    public:
        string arrive(char);
        string onceflyto(char);
  friend istream &operator>>(istream &,Company &);
};
istream &operator>>(istream &is,Company &a)
{
    is >> a.n;
    a.airline=new char[a.n*2];
    for(int i=0;i<a.n*2;i++) is >> a.airline[i];
    return is;
}
string Company::arrive(char start)
{
    if(strchr(airline,start)==NULL) return "";
    string arr="";
    arr+=start;
    for(int i=0;i<arr.length();i++)
    {
        string tmp;
        tmp=this->onceflyto(arr[i]);
        for(int j=0;j<tmp.length();j++)
            if(arr.find(tmp[j])==string::npos)
                arr+=tmp[j];
    }
    return arr;
}
string Company::onceflyto(char o_start)
{
    string o_arr="";
    for(int j=0;j<n*2;j++)
        if(airline[j]==o_start)
            if(j%2)
                o_arr+=airline[j-1];
            else
                o_arr+=airline[j+1];
    return o_arr;
}
int main()
{
    int time;
    cin >> time;
    while(time--)
    {
        Company a,b;
        bool issame=true;
        cin >> a >> b;
        for(char ch='A';ch<='Z' && issame;ch++)
        {
            string ar=a.arrive(ch);
            string br=b.arrive(ch);
            if(ar.find_first_not_of(br)!=string::npos) issame=false;
            if(br.find_first_not_of(ar)!=string::npos) issame=false;
        }
        issame ? (cout << "YES") : (cout << "NO");
        cout << endl << endl;
    }
    return 0;
}
