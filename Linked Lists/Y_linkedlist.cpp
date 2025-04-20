#include <iostream>
using namespace std;


// S(1) T(m+n)
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (headA == NULL || headB == NULL)
    {
        return NULL;
    }
    ListNode *temp1 = headA;
    ListNode *temp2 = headB;
    int len1 = 0, len2 = 0;

    while (temp1 != NULL)
    {
        len1++;
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        len2++;
        temp2 = temp2->next;
    }
    temp1 = headA;
    temp2 = headB;

    if (len1 > len2)
    {
        for (int i = 0; i < len1 - len2; i++)
        {
            temp1 = temp1->next;
        }
    }
    else if (len2 > len1)
    {
        for (int i = 0; i < len2 - len1; i++)
        {
            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1 == temp2)
        {
            return temp1;
        }
        else
        {
            // if (temp1->next != NULL) {
            temp1 = temp1->next;
            // }
            // if (temp2->next != NULL) {
            temp2 = temp2->next;
            // }
        }
    }
    return NULL;
}


