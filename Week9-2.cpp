#include<bits/stdc++.h>
using namespace std;
class point
{
public:
    int x,y;
    int pointdist (const point &p1,const point &p2){return pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2);}
};
class rect
{
public:
    point r1,r2;
    bool pointin (const point &a1,const rect &a2){return (a1.x>=a2.r1.x&&a1.x<=a2.r2.x&&a1.y>=a2.r1.y&&a1.y<=a2.r2.y);}
};
int main()
{
    deque<point> clicks,icons;
    deque<rect> rects;
    for(char c= 0;cin>>c&&c!='#';)
    {
        point temp1;
        rect temp2;
        if(c=='I')
        {
            cin>>temp1.x>>temp1.y;
            icons.push_back(temp1);
        }
        else if(c=='M')
        {
            cin>>temp1.x>>temp1.y;
            clicks.push_back(temp1);
        }
        else if(c=='R')
        {
            cin>>temp2.r1.x>>temp2.r1.y>>temp2.r2.x>>temp2.r2.y;
            rects.push_back(temp2);
        }
    }
    deque<point>::iterator iclicks,icon;
    deque<rect>::iterator irect;
    for(icon = icons.begin();icon!=icons.end();++icon)
        for(irect = rects.begin();irect != rects.end();++irect)
            if(irect->pointin(*icon,*irect))
        {
            icon->x = 10000;
            icon->y = 10000;
        }
    for(iclicks = clicks.begin();iclicks!=clicks.end();iclicks++)
    {
        deque<rect>::reverse_iterator rirect;
        for(rirect = rects.rbegin();rirect != rects.rend()&&!rirect->pointin(*iclicks,*rirect);++rirect);
        if(rirect != rects.rend())
        {
            cout<<(char)(distance(rirect,rects.rend()) -1 +'A')<<endl;
            continue;
        }
        deque<int>temp4(1,1);
        deque<point>::iterator itemp = icons.begin(),icon;
        int tag1 = iclicks->pointdist(*iclicks,*itemp);
        for(icon = itemp +1;icon!=icons.end();++icon)
        {
            int tag2 = iclicks->pointdist(*iclicks,*icon);
            if(tag2<tag1)
            {
                itemp = icon;
                tag1 = tag2;
                temp4.clear();
                temp4.push_back(distance(icons.begin(),icon) +1);
            }
            else if(tag1 == tag2)
                 temp4.push_back(distance(icons.begin(),icon) +1);
        }
        deque<int>::iterator i;
        for(i = temp4.begin();i!=temp4.end();i++)
            cout<<setw(3)<<*i;
        cout<<endl;
    }
}
