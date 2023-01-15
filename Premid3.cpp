#include<iostream>
using namespace std;
int main()
{
  int n;
  while(cin>>n)
  {
  int E = 1,S = 0;
    while(n > 0)
    {
      E += n;
      S += n;
      n = 0;
      if(E / 3 > 0)
      {
        n = E / 3;
        E %= 3;
      }
    }
    cout<<S<<endl;
  }
}
