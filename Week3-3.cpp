#include<iostream>
using namespace std;
class Look
{
public:
    istream &read(istream &is)
    {
        is>>a>>b;
        if(b != "dominant" && b != "recessive" && b != "non-existent")
        {
            string temp;
            temp = b;
            b = a;
            a = temp;
        }
        return is;
    }
    ostream &put(ostream &os){os<<a<<" "<<b;return os;}
    string Find(const string &e,const string &f)
    {
    if((e == "dominant" && f == "non-existent") || (f == "dominant" && e == "non-existent") || (e == "recessive" && f == "recessive"))
       return "recessive";
    else if((e == "non-existent" && f == "non-existent") || (e == "recessive" && f == "non-existent") || (f == "recessive" && e == "non-existent"))
        return "non-existent";
    else
        return "dominant";
    }
    void in (string h) {a = h;}
    void ou (string m) {b = m;}
    string geta() {return a;}
    string getb() {return b;}
private:
    string a,b;
};
void recurse (Look genes[],int x,int y)
{
    for(int i = 0;i < y;i++)
    {
        if(genes[i].geta() == genes[x].getb() || genes[i].geta() == genes[x+1].getb())
        {
            if(genes[i].getb() != "dominant" && genes[i].getb() != "recessive" && genes[i].getb() != "non-existent")
                recurse(genes,i,y);
            for(int j = i+1 ;j < y;j++)
            {
                if(genes[j].geta() == genes[x].getb() || genes[j].geta() == genes[x+1].getb())
                {
                    if(genes[j].getb() != "dominant" && genes[j].getb() != "recessive" && genes[j].getb() != "non-existent")
                        recurse(genes,j,y);
                    genes[x].ou(genes[x].Find(genes[i].getb(),genes[j].getb()));
                    genes[x+1].in("KS");
                    i = y;
                    j = y;
                }
            }
        }
    }
}
int main()
{
    int n;
    string c, d;
    cin>>n;
    Look genes[n];
    for(int i = 0;i < n;i++)
        genes[i].read(cin);
    for(int i = 1;i < n;i++)
    {
        for(int j = 0;j < n - i;j++)
        {
            if(genes[j].geta() > genes[j+1].geta())
            {
                Look temp;
                temp = genes[j];
                genes[j] = genes[j+1];
                genes[j+1]  = temp;
            }
        }
    }
    for(int i = 0;i < n;i++)
    {
        if(genes[i].getb() != "dominant" && genes[i].getb() != "recessive" && genes[i].getb() != "non-existent")
        {
            recurse(genes,i,n);
            genes[i].put(cout);
        }
        else
            genes[i].put(cout);
        cout<<endl;
        if(genes[i+1].geta() == "KS")
            i++;
    }
    return 0;
}
