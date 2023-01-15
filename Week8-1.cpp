class queue:private container
{
private:
    int index = -1;
public:
    queue() = default;
    queue(int l) : container(l){}
    queue(const queue &a):container(a),index(a.index){}
    bool enqueue(int data)
    {
        if(index+1==len)
            return false;
        box[++index] = data;
        return true;
    }
    int *dequeue()
    {
        if(index==-1)
            return NULL;
        int *temp = new int ;
        *temp = box[0];
        for(int i =0;i<index;i++)
            box[i] = box[i+1];
        --index;
        return temp;
    }
    bool increase()
    {
        return reallocate(len*2);
    }
    int getLen() {return len;}
};
