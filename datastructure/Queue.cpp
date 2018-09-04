//
// Created by gtkansy on 18-8-22.
//

#include <iostream>
using namespace std;

//用front和rear下标分别表示队头元素下标和队尾元素下标 ,队尾插入，队头删除

//用链表实现队列

template <class T>
class Queue {
private:
    struct Node {
        T data;
        Node *next;
    };

private:
    Node *head;
    Node *rear;
    int queueSize;

public:
    Queue() : head(NULL), rear(NULL), queueSize(0) { }

    ~Queue() {
        while (!empty())
            pop();
    }

    void push(const T &val) {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;
        if (head == NULL && rear == NULL) {
            head = rear = new_node;
        } else {
            rear->next = new_node;
            rear = new_node;
        }
        ++queueSize;
    }

    void pop() {
        if (!empty()) {
            Node *temp = head;
            head = head->next;  //新的head
            delete temp;
            --queueSize;
        }
    }

    T front() const {
        if (!empty())
            return head->data;
    }

    T back() const {
        if (!empty())
            return rear->data;
    }

    bool empty() const {
        return queueSize == 0;
    }

    int size() const {
        return queueSize;
    }
};




//用数组实现循环链表


template <class T>
class arrayQueue {
private:
    static const int maxqueue = 10;
    T entry[maxqueue + 1];  // 分配比maxqueue + 1的空间
    // 实际上队列的可用空间还是maxque
    int head;
    int rear;
    int queueSize;

    bool full() const {
        return (((rear + 1) % (maxqueue + 1)) == head)
               && (queueSize == maxqueue);
    }

public:
    arrayQueue() : head(0), rear(0), queueSize(0) {
        for (int i = 0; i < maxqueue + 1; i++)
            entry[i] = T();
    }

    // 下面所以求余都是为了让rear和front的范围限定在[0, 10]

    void push(const T &val) {
        if (!full()) {
            entry[rear] = val;
            rear = (rear + 1) % (maxqueue + 1);
            ++queueSize;
        }
    }

    void pop() {
        if (!empty()) {
            head = (head + 1) % (maxqueue + 1);
            --queueSize;
        }
    }

    T front() const {
        if (!empty())
            return entry[head];
    }

    T back() const {
        if (!empty())
            // rear-1是队列最后一个元素的位置
            // rear-1可能是-1，所以将其跳转到maxqueue位置
            return entry[(rear - 1 + (maxqueue + 1)) % (maxqueue + 1)];
    }

    bool empty() const {
        return ((rear + 1) % (maxqueue + 1) == head) && (queueSize == 0);
    }

    int size() const {
        return queueSize;
    }
};




