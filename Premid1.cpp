#include <iostream>
class F
{
  public:
  F(int i , int j) :a(i),b(j)
  {}
  int  S(int n){return ((n+1)*b) + (a * n*(n+1)/2);}
  int G(int k,int l)
  {
      int m = k, total = 0;
      for(;m <= l;m++)
          total += m;
      return (l-k+1)*b + total * a;
  }
  private :
  int a , b;
};
int main() {
  int a, b, j;
  std::cin>>a>>b;
  F f(a, b);
  for(j = 0;j < 10;j ++)
  {
    int x, y;
    std::cin>>x>>y;
    std::cout<<f.S(x)<<std::endl;
    std::cout<<f.G(x, y)<<std::endl;
  }
  return 0;
}
