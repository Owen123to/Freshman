class Shape
{
  public:
  virtual float getArea() = 0;
};
class Circle:public Shape
{
protected:
  float radius;
  public:
  Circle(float r):radius(r){}
  virtual float getArea()
  {
  	return radius * radius*3.14;
  }
};
class Rectangle:public Shape
{
  protected:
  float width,height;
  public:
  Rectangle(float w,float h):width(w),height(h){}
  virtual float getArea()
  {
    return width*height;
   }
};

int main() {
  int a, b, c;
  std::cin >> a >> b >>c;
  Circle c1(a);
  Rectangle r(b, c);
  std::cout<<c1.getArea()<<std::endl;
  std::cout<<r.getArea()<<std::endl;
  return 0;
}
