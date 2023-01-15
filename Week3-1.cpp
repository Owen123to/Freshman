class Coordinate
{
public:
  Coordinate() = default;
  Coordinate(Coordinate &a) :
  x(a.x) , y(a.y){}
  Coordinate(int x1, int y1): 
  x(x1),y(y1){}
  int getX()const
  {
    return x;
  }
  int getY() const
  {
    return y;
  }
  void setX(int val)
  {
    x = val;
  }
  void setY(int val)
  {
    y = val;
  }
  void showCoordInfo()
  {
    std::cout<<"("<<x<<", "<<y<<")"<<std::endl;
  }
private:
  int x = 0, y = 0; 
};
