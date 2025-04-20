#include <iostream>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// brute force is calculate the middle node using length like array and delete it using linked list deletion
ListNode *getMiddle(ListNode *&head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    if (fast->next == NULL)
    {
        return fast;
    }
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
ListNode *deleteNode(ListNode *head, ListNode *key)
{

    ListNode *prev = nullptr;
    ListNode *temp = head;
    if (temp->next == NULL)
    {
        delete (temp);
        return NULL;
    }

    temp = head;
    // deleting a node

    while (temp != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (prev)
    {
        prev->next = temp->next; // Bypass the node to delete
    }
    delete temp;
    temp = nullptr;
    return head;
}

ListNode *deleteMiddle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    ListNode *midNode = getMiddle(head);
    ListNode *finalList = deleteNode(head, midNode);
    return finalList;
}