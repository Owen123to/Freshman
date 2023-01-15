class queue:public container
{
protected:
    int index = -1;
public:
    queue() = default;
    queue(int l) :container(l),index(-1){}
    queue(const queue&a):container(a),index(a.index){}
    virtual bool put_in(int obj) override
    {
        if(len== index+1)
            return false;
        box[++index] = obj;
        return true;
    }
    virtual int *take_out(void) override
    {
        if(index==-1)
            return NULL;
        int *temp = new int;
        *temp = box[0];
        for(int i = 0;i<index;i++)
            box[i] = box[i+1];
        --index;
        return temp;
    }
};

class priority_queue:public queue
{
protected:
    bool order;
public:
    priority_queue(int len, bool f):queue(len),order(f){}
    virtual int *take_out(void) override
    {
        if(index==-1)
            return NULL;
        for(int i = 1;i<index;i++)
            for(int j = 0;j<=index -i;j++)
            if(box[j] > box[j+1])
        {
            int temp = box[j+1];
            box[j+1] = box[j];
            box[j] = temp;
        }
        if(order)
        {
            int *temp = new int ;
            *temp = box[index--];
            return temp;
        }
        else
        {
            int *temp = new int ;
            *temp = box[0];
            for(int i = 0;i<index;i++)
                box[i] = box[i+1];
            index--;
            return temp;
        }
    }
};
