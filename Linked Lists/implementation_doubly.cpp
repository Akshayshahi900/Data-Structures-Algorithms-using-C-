#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
    Node(Node *next1, Node *prev1, int data)
    {
        this->data = data;
        this->next = next1;
        this->prev = prev1;
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
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    temp->prev = NULL;
    head = temp;
    return;
}
void insertAtEnd(Node *&tail, int data)
{
    if (tail == NULL)
    {
        insertAtHead(tail, data);
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = NULL;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}
void insertAtPosition(Node *&head, int data, int position)
{
    if (head == NULL)
    { // no node so create head
        insertAtHead(head, data);
        return;
    }
    if (head->next == NULL)
    {
        // only one node , insertion at end
        insertAtEnd(head, data);
    }
    // if between two nodes

    Node *temp = head;
    // this function traverses the temp to the one less positioni
    for (int i = 0; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    //  out of list position case
    if (temp == NULL)
    {
        cout << "Position out of list, inserting at end  " << endl;
        insertAtEnd(head, data);
    }

    // final case insertion in between two nodes
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}
void deleteNode(Node *&head, int position)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (position == 1)
    {
        // delete head;
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node and end node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next->prev = prev;
        curr->next = NULL;
        curr->prev = NULL;

        delete curr;
    }
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 4, 3, 14, 6, 7, 8, 96, 3};
    Node *node1 = new Node(arr[0]);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, arr[1]);
    print(head);

    cout << "head:" << head->data << "   tail:" << tail->data << endl;

    insertAtEnd(tail, arr[2]);
    print(head);

    cout << "head:" << head->data << "   tail:" << tail->data << endl;
    insertAtEnd(tail, arr[3]);
    print(head);

    cout << "head:" << head->data << "   tail:" << tail->data << endl;

    insertAtPosition(head, arr[4], 2);
    print(head);

    cout << "head:" << head->data << "   tail:" << tail->data << endl;

    deleteNode(head, 1);
    print(head);
    cout << "head:" << head->data << "   tail:" << tail->data << endl;
    deleteNode(head, 3);
    print(head);
    cout << "head:" << head->data << "   tail:" << tail->data << endl;
}
