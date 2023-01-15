#include<iostream>
using namespace std;
class Player
{
public:
  Player() = default;
  Player(int num, string name);
  int getPlayerNum() {return a};
  string getPlayerName() {return b;}
  bool setPlayerNum(int n);
  bool setPlayerName(string n);
private:
  int a = 0;
  string b;
};
Player::Player(int num, string name) :a(num),b(name)
{
  if (a<=0||a>=5)
    cerr<<"out of range\n";
  if (b.length() >= 20)
    cerr<<"your name is illegal\n";
}
bool Player::setPlayerNum(int n)
{
  if (n <= 0||a >= 5)
    return false;
  else
  {
    a = n;
    return true;
  }
}
bool Player::setPlayerName(string n)
{
  if(n.length() >= 20)
    return false;
  else
  {
    b = n;
    return true;
  }
}
