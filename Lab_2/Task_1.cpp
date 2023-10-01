#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class MyLinkedList
{
private:
    ListNode *head;

public:
    MyLinkedList() : head(NULL) {}

    void addAtHead(int val)
    {
        ListNode *newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }

    void print()
    {
        ListNode *current = head;
        while (current)
        {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }

    void reverse()
    {
        ListNode *prev = NULL;
        ListNode *current = head;
        while (current)
        {
            ListNode *nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
    }
};

int main()
{
    MyLinkedList intList;

    intList.addAtHead(1);
    intList.addAtHead(2);
    intList.addAtHead(3);
    intList.print();

    intList.reverse();
    intList.print();

    return 0;
}
