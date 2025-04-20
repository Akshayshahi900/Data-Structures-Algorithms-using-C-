#include <iostream>
using namespace std;
#include <vector>

class ListNode
{

public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// brute force approach

// bool isPalindrome(ListNode *head)
// {

//     vector<int>
//         arr;
//     ListNode *temp = head;
//     while (temp != NULL)
//     {
//         arr.push_back(temp->val);
//         temp = temp->next;
//     }

//     // copied everything to the array and now the check the palindrome using two pointer approach

//     int s = 0;
//     int n = arr.size() - 1;
//     int e = n;

//     while (s <= n)
//     {
//         if (arr[s] != arr[e])
//         {
//             return false;
//         }
//         s++;
//         e--;
//     }

//     return true;
// }
ListNode *reverse(ListNode *head)
{
    ListNode *curr = head;
    ListNode *prev = NULL;
    ListNode *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
ListNode *getMiddle(ListNode *head)
{

    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

bool isPalindrome(ListNode *head)
{

    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    // step1 - get MIddle
    ListNode *middle = getMiddle(head);

    // step -2 reverse the list

    ListNode *secondHalf = reverse(middle);

    // compare first and second halves
    ListNode *firstHalf = head;
    ListNode *temp = secondHalf;

    while (secondHalf != NULL)
    {
        if (firstHalf->val != secondHalf->val)
        {
            reverse(temp); // restore the original list
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    // repeat step 2

    reverse(temp);
    return true;
}