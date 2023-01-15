#include<iostream>
using namespace std;
class container
{
private:
  int *box;
  int len;
  int index;
  static int count;
  static void increase(){count++;}
  static void decrease(){count--;}
  bool reallocate(int size)
  {
      int *temp = new int [size];
      for(int i = 0;i<= index;i++)
        temp[i] = box[i];
      delete [] box;
      len = size;
      box = temp;
      return true;
  }
public:
  container(void): box(NULL), len(0), index(-1) {increase();}
  int getLen(){return len;}
  int getIndex(){return index;}
  container(int len)
  {
      box = new int [len];
      this->len = len;
      index = -1;
      increase();
  }
  ~container(){delete[] box;decrease();}
  void traversal()
  {
      if(index==-1)
        cout<<"empty\n";
      else
      {
          for(int i = 0;i<=index;i++)
            cout<<box[i]<<" ";
          cout<<endl;
      }
  }
  bool push(int data)
  {
      if(len == 0)
        return false;
      if(index==len-1)
            reallocate(len*2);
          box[++index] = data;
          return true;
  }
  int pop()
  {
      if(len==0)
        return 0;
      int temp = box[0];
      for(int i = 0;i<index;i++)
        box[i] = box[i+1];
      --index;
      return temp;
  }
  static int getCount(){return count;}
};
int container::count = 0;
