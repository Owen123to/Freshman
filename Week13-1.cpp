#include <bits/stdc++.h>
using namespace std;
int main()
{
  Robot rb;
  string instruction;
  while (cin >> instruction && instruction!="STOP")
    {
    if (instruction == "GO")
    {
      cin >> instruction;
      for (int i=0;i<stoi(instruction);i++)
        rb.go();
    }
    else if (instruction == "TURN")
    {
      cin >> instruction;
      if (instruction == "RIGHT")
        rb.turn("RIGHT");
      else
        rb.turn("LEFT");
    }
    else if (instruction == "TURNTO")
    {
      cin >> instruction;
      while (rb.getDirection() != instruction[0])
        rb.turn("RIGHT");
    }
    else if (instruction == "SHOWINFO")
    {
      rb.display();
    }
    else if (instruction == "GOTO")
    {
      cin >> instruction;
      int destx=stoi(instruction);
      cin >> instruction;
      int desty=stoi(instruction);
      int movex=destx-rb.getPositionX(),movey=desty-rb.getPositionY();
      if (movex < 0)
      {
        while (rb.getDirection() != 'W')
          rb.turn("RIGHT");
        for (int i=movex;i<0;i++)
          rb.go();
      }
      else
      {
        while (rb.getDirection() != 'E')
          rb.turn("RIGHT");
        for (int i=movex;i>0;i--)
          rb.go();
      }
      if (movey < 0)
      {
        while (rb.getDirection() != 'S')
          rb.turn("RIGHT");
        for (int i=movey;i<0;i++)
          rb.go();
      }
      else
      {
        while (rb.getDirection() != 'N')
          rb.turn("RIGHT");
        for (int i=movey;i>0;i--)
          rb.go();
      }
      while (rb.getDirection() != 'N')
          rb.turn("RIGHT");
    }
  }
  return 0;
}
