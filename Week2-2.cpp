#include <iostream>
using namespace std;
char revers(char n)
{
    cin >> n;
    if (n != '.')
        revers(n);
    if (n != '.')
        cout<<n;
}
int main()
{
    char n;
    revers(n);
}
