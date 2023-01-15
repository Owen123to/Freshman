int F(int x, int y)
{
  if(x<y)
    return 3*x+F(x+1,y);
  else if(x>y)
    return 2*y+F(x,y+1);
  else
    return x*y;
}
