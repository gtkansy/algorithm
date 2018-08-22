//
// Created by gtkansy on 18-8-22.
//

#include <iostream>
using namespace std;

//用front和rear下标分别表示队头元素下标和队尾元素下标 ,队尾插入，队头删除

//用链表实现队列
struct ListNode
{
    int nData;
    ListNode* pNext;
};

class ListQueue{
private:
    ListNode* m_pHead;
    ListNode* m_pTail;
    //可以直接用list实现

public:
    ListQueue():m_pHead(NULL),m_pTail(NULL){}

    void push(int data){
        ListNode* pNew=new ListNode;
        pNew->nData=data;
        pNew->pNext=NULL;

        if(m_pTail==NULL)
        {
            m_pTail=pNew;
            m_pHead=pNew;
        }
        else
        {
            m_pTail->pNext=pNew;
            m_pTail=pNew;
        }
    }

    // 在链表头部弹出
    void Pop()
    {
        ListNode* pPop =  m_pHead;
        m_pHead = m_pHead->pNext;
        delete pPop;

        // 弹出最后一个元素时，两指针均置空
        if (NULL == m_pHead)
            m_pTail = NULL;

    }

    int Front()
    {
        return m_pHead->nData;
    }
    int Back()
    {
        return m_pTail->nData;
    }




};





//用数组实现
