//
// Created by gtkansy on 18-8-22.
//

/**
 * 栈：   只能在栈顶push and pop n  #include<stack>
 * 数据结构：   可以用数组和链表
 *
 */
#include <iostream>
using namespace std;

template <class T>
class arraystack{
public:
    arraystack();
    ~arraystack();
    bool isempty();
    void push(const T &data);
    void pop();
    T& gettop();

private:
    T *stacknodes;  //int *A=new int[size];  string *ps = new string("hello world");
    int top;
    int capacity;
};

template <class T>
arraystack<T>::arraystack() {
    //注意<T>
    capacity=3;
    stacknodes=new T[3];
    top=-1;
    cout<<"the stack is constructed!"<<endl;
    cout<<"the capacity is:"<<capacity<<endl;
}

template <class T>
arraystack<T>::~arraystack() {
    delete[]stacknodes;  //new/delete 、new []/delete[] 尽量要配对使用   https://blog.csdn.net/hazir/article/details/21413833
    capacity=0;
    top=-1;
    cout<<"the stack is destructed!"<<endl;
}

template <class T>
bool arraystack<T>::isempty() {
    if(top==-1)
        return true;
    else
        return false;
}

template <class T>
void arraystack<T>::push(const T &data) {
    if(top+1==capacity){
        //满了
        capacity=capacity*2;
        T *p=new T[capacity];
        for(int i=0;i<=top;i++)
            p[i]=stacknodes[i];
        T *q=stacknodes;
        stacknodes=p;
        delete []q;
        cout<<"the capacity is :"<<capacity<<endl;

    }
    stacknodes[++top]=data;
    cout<<"push in:"<<stacknodes[top]<<endl;
}

template <class T>
void arraystack<T>::pop() {
    if(!isempty())
        top--;
}

template <class T>
T& arraystack<T>::gettop() {
    if(!isempty())
        return stacknodes[top];   //引用，这样操作的返回值就是那个return后面的变量地址数据的本身
}


///////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T>
struct linknode{
        T data;
        linknode* next;
};

template <class T>
class liststack{
public:
    liststack();
    ~liststack();
    bool isempty();
    void push(const T& data);
    void pop();
    T& gettop();

private:
    linknode<T> *head;  //栈底
    linknode<T> *top;   //存贮当前的栈顶
    int length;
};

template <class T>
liststack<T>::liststack() {
    head=NULL;
    top=NULL;
    length=0;
    cout<<"the stack is constructed!"<<endl;
}

template <class T>
liststack<T>::~liststack() {
    while(!isempty())
        pop();
    cout<<"the stack is destructed!"<<endl;
}

template <class T>
bool liststack<T>::isempty() {
    if(head==NULL)
        return true;
    else
        return false;
}

template <class T>
void liststack<T>::push(const T &data) {
    if(!head){
        head=new linknode<T>;
        head->data=data;
        head->next=NULL;
        top=head;
        length++;
        cout<<"push in:"<<top->data<<endl;
    }
    else
    {
        linknode<T> *p=new linknode<T>;
        p->data=data;
        p->next=NULL;
        top->next=p;
        top=p;
        length++;
        cout<<"push in:"<<top->data<<endl;
    }
}

template <class T>
void liststack<T>::pop() {
    if(!isempty())
    {
        linknode<T> *p=head;
        if(p==top){
            head=NULL;
            top=NULL;
        }
        else
        {
            while(p->next!=top)
            {
                p=p->next;  //把p往上抬
            }
            top=p;
            p=top->next;    //注意
        }
        delete p;
        length--;
    }
}

template <class T>
T& liststack<T>::gettop() {
    if (!isempty())
        return top->data;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    const int n=5;
    int data;
    arraystack<int> stk;               //数组
    //liststack<int> stk;               //链表
    int a[n]={4,8,6,12,9};
    for(int i=0;i<n;i++)
        stk.push(a[i]);
    while(!stk.isempty()) {
        data = stk.gettop();
        cout << "pop out:" << data << endl;
        stk.pop();
    }
}
