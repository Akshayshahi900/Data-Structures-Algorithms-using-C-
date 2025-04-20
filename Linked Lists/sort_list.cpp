#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// brute force
ListNode *sortList(ListNode *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    vector<int> arr;

    ListNode *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->val);
        temp = temp->next;
    }

    sort(arr.begin(), arr.end());
    temp = head;
    for (int i = 0; i < arr.size(); i++)
    {
        temp->val = arr[i];
        temp = temp->next;
    }
    return head;
}

// MergeSort
ListNode *mergeTwoSortedList(ListNode *&List1, ListNode *&List2)
{
    ListNode *dummyNode = new ListNode(-1);
    ListNode *temp = dummyNode;

    while (List1 != nullptr && List2 != nullptr)
    {
        // compare the data of both list and link the smaller to temp;
        if (List1->val <= List2->val)
        {
            temp->next = List1;
            List1 = List1->next;
        }
        else
        {
            temp->next = List2;
            List2 = List2->next;
        }
        temp = temp->next;
    }

    if(List1!= nullptr){
        temp ->next = List1;
    }
    else{
        temp ->next = List2;
    }
    return dummyNode->next;
}
ListNode *getMiddle(ListNode *&head)
{

    // Initialize the slow pointer to the head.
    ListNode *slow = head;

    // Initialize the fast pointer to the head.
    ListNode *fast = head->next;

    // Traverse the linked list using the
    // Tortoise and Hare algorithm.
    while (fast != NULL && fast->next != NULL)
    {
        // Move slow one step.
        slow = slow->next;
        // Move fast two steps.
        fast = fast->next->next;
    }

    // Return the slow pointer,
    // which is now at the middle ListNode.
    return slow;
}
ListNode *mergeSort(ListNode *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // get middle/pivot
    ListNode *middle = getMiddle(head);

    // divide the list in two halfes
    ListNode *right = middle->next;
    ListNode *left = head;
    middle->next = nullptr;

    left = mergeSort(left);
    right = mergeSort(right);

    return mergeTwoSortedList(left, right);
}
void printLinkedList(ListNode *&head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    return;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Linked list before sorting" << endl;
    printLinkedList(head);

    // head= sortList(head);
    head = mergeSort(head);

    cout << "Linked list after sorting" << endl;
    printLinkedList(head);
}