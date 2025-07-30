#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next = nullptr;
};

class List
{
private:
    Node *head, *tail;

public:
    List()
    {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtHead(int val)
    {
        Node *newnode = new Node();
        newnode->data = val;
        // if (!head)
        // {
        //     head = newnode;
        //     return;
        // }
        // Node *temp = head;
        newnode->next = head;
        head = newnode;
        return;
    }

    void insertAtTail(int n)
    {
        Node *newnode = new Node();
        newnode->data = n;
        if (!head)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        // following code will take O(n)
        //  Node *temp = head;
        //  while (temp->next != nullptr)
        //  {
        //      temp = temp->next;
        //  }
        //  temp->next = newnode;
        return;
    }

    void deleteHead()
    {
        if (!head)
            return;
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteTail()
    {
        if (!head)
            return;
        if (!head->next)
        {
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        Node *temp = head;
        // without tail
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        delete temp->next;
        // with tail
        //  while (temp->next != tail)
        //  {
        //      temp = temp->next;
        //  }
        //  delete tail;
        temp->next = nullptr;
        tail = temp;
        return;
    }

    void deleteByValue(int val)
    {
        if (!head)
            return;
        else if (!head->next && head->data == val)
        {
            delete head;
            head = nullptr;
            tail = nullptr;
        }

        


    }

    void traverse()
    {
        while (head != nullptr)
        {
            cout << head->data << "->";
            head = head->next;
        }
        cout << "NULL";
        return;
    }
};

int main()
{
    List list;
    list.insertAtTail(5);
    list.insertAtTail(10);
    list.deleteHead();
    list.insertAtTail(23);
    list.insertAtHead(65);
    list.deleteTail();
    list.insertAtTail(33);
    list.traverse();

    return 0;
}