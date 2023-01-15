#include<iostream>
#include<cmath>
using namespace std;

class Point
{
public:
	float x, y;
};

class Segment
{
public:
	Segment()
	{
	}
	Segment(Point _a, Point _b)
	{
		a = _a;
		b = _b;
	}
	Point getPointA() const
	{
		return a;
	}
	Point getPointB() const
	{
		return b;
	}
	void setPoint(const Point _a, Point _b)
	{
		a = _a;
		b = _b;
	}
	float getLength() const
	{
		return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	}
	float getDistance(const Point &a) const // the height from point to the line which segment lie on.
        {
            float m = (this->getPointA().y - this->getPointB().y) / (this->getPointA().x - this->getPointB().x);
            float len = abs(m * a.x - a.y - m * getPointA().x - getPointA().y) / sqrt(m * m + 1);
            return len;
        }
private:
	Point a, b;
};

class Triangle
{
public:
	Triangle(Segment s1, Segment s2, Segment s3)
	{
		seg1 = s1;
		seg2 = s2;
		seg3 = s3;
	}
	static bool isTriangle(Segment A, Segment B, Segment C)
        //to determine if three segment can construct a triangle. they must overlap at the endpoint to construct a triangle.
        {
          if(A.getPointA().x == B.getPointA().x && A.getPointA().y == B.getPointA().y)
          {
              if(((A.getPointB().x == C.getPointA().x && A.getPointB().y == C.getPointA().y) &&(B.getPointB().x == C.getPointB().x && B.getPointB().y == C.getPointB().y))||
                 ((A.getPointB().x == C.getPointB().x && A.getPointB().y == C.getPointB().y) && (B.getPointB().x == C.getPointA().x && B.getPointB().y == C.getPointA().y)))
                  return true;
            else
                return false;
          }
          else if(A.getPointA().x == B.getPointB().x && A.getPointA().y == B.getPointB().y)
          {
              if(((A.getPointB().x == C.getPointA().x && A.getPointB().y == C.getPointA().y) &&(B.getPointA().x == C.getPointB().x && B.getPointA().y == C.getPointB().y))||
                 ((A.getPointB().x == C.getPointB().x && A.getPointB().y == C.getPointB().y) && (B.getPointA().x == C.getPointA().x && B.getPointA().y == C.getPointA().y)))
                  return true;
            else
                return false;
          }
          else if(A.getPointA().x == C.getPointA().x && A.getPointA().y == C.getPointA().y)
          {
              if(((A.getPointB().x == B.getPointA().x && A.getPointB().y == B.getPointA().y) &&(B.getPointB().x == C.getPointB().x && B.getPointB().y == C.getPointB().y))||
                 ((A.getPointB().x == B.getPointB().x && A.getPointB().y == B.getPointB().y) && (B.getPointA().x == C.getPointB().x && B.getPointA().y == C.getPointB().y)))
                  return true;
            else
                return false;
          }
            else if(A.getPointA().x == C.getPointB().x && A.getPointA().y == C.getPointB().y)
          {
              if(((A.getPointB().x == B.getPointA().x && A.getPointB().y == B.getPointA().y) &&(B.getPointB().x == C.getPointA().x && B.getPointB().y == C.getPointA().y))||
                 ((A.getPointB().x == B.getPointB().x && A.getPointB().y == B.getPointB().y) && (B.getPointA().x == C.getPointA().x && B.getPointA().y == C.getPointA().y)))
                  return true;
            else
                return false;
          }
          else
            return false;
        }
	float getArea() const //return the area of triangle
        {
          float aa,bb,cc,dd;
          aa = seg1.getLength();
          bb = seg2.getLength();
          cc = seg3.getLength();
          dd = (aa+bb+cc) / 2;
          return sqrt(dd*(dd-aa)*(dd - bb)*(dd- cc));
        }
private:
	Segment seg1, seg2, seg3;
};
