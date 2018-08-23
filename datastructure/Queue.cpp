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
            head = head->next;
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




//用数组实现

typedef struct
{
    datatype data[MAXSIZE];
    int front,rear;    //表示队列的头尾位置
}Queue;





