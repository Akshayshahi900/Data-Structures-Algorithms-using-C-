#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }

    ~Node()
    {
        int val = data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
};

Node *findLast(Node *temp, int k)
{
    int cnt = 1;
    while (temp != NULL)
    {
        if (cnt == k)
            return temp;
        temp = temp->next;
        cnt++;
    }
    return temp;
}

Node *rotateRight(Node *head, int k)
{
    if (head == NULL || k == 0)
    {
        return head;
    }
    Node *tail = head;
    int len = 1;
    while (tail->next != NULL)
    {
        tail = tail->next;
        len++;
    }

    if (k % len == 0)
        return head;

    k = k % len;

    // attach tailto head
    tail->next = head;
    Node *lastNode = findLast(head, len - k);

    head = lastNode->next;
    lastNode->next = NULL;
    return head;
}
