
//brute force approach to calculate the starting point of a loop in a linked list
// T(n)
//S(n)

#include <iostream>
#include <unordered_map>
using namespace std;

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
    Node(Node *next1, int data)
    {
        this->data = data;
        this->next = next1;
    }
};
Node *detectLoop(Node *head)
{
    // temp variable
    Node *temp = head;

    unordered_map<Node *, int> mp;

    // list traversal

    while (temp != NULL)
    {
        if (mp.count(temp) != 0)
        {
            // means a node is traversed twice
            return temp;
        }
        // increase the count of the node variable
        mp[temp] = 1;

        temp = temp->next;
    }
    // no loop detected return nullptr

    return nullptr;
}
int main()
{
    // sample linked list
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    node1->next = node2;
    Node *node3 = new Node(3);
    node2->next = node3;
    Node *node4 = new Node(4);
    node3->next = node4;
    Node *node5 = new Node(5);
    node4->next = node5;

    // creating a loop

    node5->next = node3;
    Node *head = node1;

    Node *loopStartNode = detectLoop(head);

    if (loopStartNode)
    {
        cout << "Loop detected. Starting node of the loop is: " << loopStartNode->data << endl;
    }
    else
    {
        cout << "No loop detected in the linked list." << endl;
    }
    return 0;
}