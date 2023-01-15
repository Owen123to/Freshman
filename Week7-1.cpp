#include<bits/stdc++.h>
using namespace std;
class F
{
    public:
    F(double i,double j):a(i),r(j){}
    double at (double x)
    {
        return a*pow(r,x);
    }
    double *S()
    {
        if(r>=1||r<=-1)
            return nullptr;
        static double aa = a/(1-r);
        double *bb =&aa;
        return bb;
    }
private:
    double a,r;
};
int main()
{
	int j, k;
	double a, r;
	cin>>a>>r;
	F f(a, r);
	for(k = 0;k < 3;k ++)
		printf("%.2lf\n", f.at(k));
	double *s = f.S();
    if(s == NULL)
      printf("NULL\n");
  else
	printf("%.2lf\n", *s);
}
