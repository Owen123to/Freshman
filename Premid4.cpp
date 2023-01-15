#include <bits/stdc++.h>
using namespace std;

class Convert
{
  public:
   static string toString(int i)
  {
    stringstream aa;
    aa<<i;
    return aa.str();
  }
  static  string toString(float j)
  {
    stringstream aa;
    aa<<j;
    return aa.str();
  }
};

int main() {
  int num;
  float f;
  cin>>num;
  cout<<Convert::toString(num)<<endl;
  cin>>f;
  cout<<Convert::toString(f);
  return 0;
}
