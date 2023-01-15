#include<iostream>
class Point
{
public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(double _x, double _y)
    {
        x = _x;
        y = _y;
    }
    double x, y;
    bool sameside(const Point &p,const Point &b,const Point &c)
    {
        if(((b.x-x) * (c.y-y) - (b.y-y) * (c.x-x)) * ((b.x-x)*(p.y-y)-(b.y-y)*(p.x-x))<0) return false;
        return true;
    }
};

class Triangle
{
public:
    Triangle(Point a, Point b, Point c)
    {
        point[0] = a;
        point[1] = b;
        point[2] = c;
    }
    //override operator* with one parameter which is also a object of Triangle and return true if two triangle collision, return false if not.
    //Two triangle collision if they overlap or share the same point or segment.
    //多載 *號，如果兩個三角形有碰撞的話就回傳 true ，否則就回傳 dalse。
    //如果兩個三角形有重疊或是共用某個線段或是點的話就是兩個三角形有碰撞。
   bool operator*(Triangle &win)
   {
       for(int i = 0;i<3;i++)
        if(point[0].sameside(win.point[i],point[1],point[2]))
            if(point[1].sameside(win.point[i],point[2],point[0]))
            if(point[2].sameside(win.point[i],point[0],point[1]))
            return true;
        return false;
   }
private:
    Point point[3];
};

int main()
{
    double x1, y1, x2, y2, x3, y3;
    std::cin>>x1>>y1>>x2>>y2>>x3>>y3;
    Point a(x1, y1), b(x2, y2), c(x3, y3);
    std::cin>>x1>>y1>>x2>>y2>>x3>>y3;
    Point a2(x1, y1), b2(x2, y2), c2(x3, y3);
    Triangle t1(a, b, c), t2(a2, b2, c2);
    std::cout<<t1 * t2<<std::endl;
}
