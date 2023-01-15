#include <iostream>
class F
{
  public:
  F(int i , int j) :a(i),b(j)
  {}
  int  S(int n)
  {
      return ((n+1)*b) + (a * n*(n+1)/2);
  }
  int G(int k,int l)
  {
      int m = k, total = 0;
      for(;m <= l;m++)
      {
          total += m;
      }
      return (l-k+1)*b + total * a;
  }
  F operator+(F &win)
  {
      return F(this->a + win.a,this->b + win.b);
  }
  F operator-(F &win)
  {
    return F(this->a - win.a,this->b - win.b);
  }
  private :
  int a , b;
};
int main() {
  int a, b, j, c, d;
  std::cin>>a>>b>>c>>d;
  F f(a, b), f2(c, d);
  for(j = 0;j < 10;j ++)
  {
    int x, y;
    std::cin>>x>>y;
    std::cout<<(f + f2).S(x)<<std::endl;
    std::cout<<(f - f2).G(x, y)<<std::endl;
  }
  return 0;
}
