class stack:private container
{
private:
    int top =-1;
public:
    stack() = default;
    stack(int l) :container(l){}
    stack(const stack &a) :container(a),top(a.top){}
    bool push(int data)
    {
        if(top +1==len)
            return false;
        box[++top] = data;
        return true;
    }
    int *pop()
    {
        if(top == -1)
            return NULL;
        int *temp = new int;
        *temp = box[top--];
        return temp;
    }
    bool increase() {return reallocate(len*2);}
    int getLen() {return len;}
};
