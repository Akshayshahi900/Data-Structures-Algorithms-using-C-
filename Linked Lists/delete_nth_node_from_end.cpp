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

ListNode *removeNthFromEnd(ListNode *head, int n)
{ // brute force
    // if (head == NULL)
    // {
    //     return nullptr;
    // }

    // ListNode *temp = head;
    // int length = 0;

    // while (temp != NULL)
    // {
    //     temp = temp->next;
    //     length++;
    // }

    // // edge case
    // if (n == length)
    // {
    //     ListNode *newHead = head->next;
    //     delete head;
    //     return newHead;
    // }

    // temp = head;
    // // deleting a node
    // ListNode *prev = nullptr;
    // for (int i = 0; i < length - n; i++)
    // {
    //     prev = temp;
    //     temp = temp->next;
    // }

    // if (prev)
    // {
    //     prev->next = temp->next; // Bypass the node to delete
    // }
    // delete temp;
    // temp = nullptr;
    // return head;

    // optimised using slow and fast pointer
    ListNode *slow = head;
    ListNode *fast = head;

    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }

    // edge case
    if (fast == NULL)
    {
        return head->next;
    }

    // move with same speed

    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    ListNode *delNode = slow->next;
    if (slow->next->next == NULL)
    {
        slow->next = NULL;
        delete (delNode);
        return head;
    }
    slow->next = slow->next->next;
    delete (delNode);
    return head;
    return head;
}