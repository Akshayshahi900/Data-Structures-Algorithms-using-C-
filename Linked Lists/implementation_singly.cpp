#include <iostream>
#include <vector>
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
    Node(int data, Node *nextNode)
    {
        this->data = data;
        this->next = nextNode;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data, head);
    head = newNode; // updates the new head
    return;
}
void insertAtEnd(Node *&head, int data)
{
    if (head == NULL)
    {

        head = new Node(data);
        return;
    }
    Node *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    Node *newNode = new Node(data);
    curr->next = newNode;
    newNode->next = NULL;
}
void insertAtPosition(Node *&head, int data, int position)
{
    Node *curr = head;

    int i = 0;
    if (position == 0)
    {
        insertAtHead(head, data);
        return;
    }
    while ((curr != NULL) && (i < position - 1))
    // if -2 then 1 based indexing
    {
        curr = curr->next;
        i++;
    }
    if (curr == NULL)
    {
        cout << "Position out of list, inserting at end" << endl;
        insertAtEnd(head, data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = curr->next;
    curr->next = newNode;
}
void insertAfter(Node *&head, int key, int data)
{
    Node *curr = head;
    Node *newNode = new Node(data);

    while (curr != NULL && curr->data != key)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Key not found" << endl;
        return;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}
void deleteNode(Node *&head, int key)
{
    if (head == NULL)
    {
        cout << "List is empty , deletion not possible" << endl;
        return;
    }
    Node *prev = NULL;
    Node *curr = head;
    while (curr->next != NULL && (curr->data != key))
    {
        prev = curr;
        curr = curr->next;
    }
    Node *temp = curr;
    prev->next = curr->next;
    delete (temp);
}
void print(Node *&head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
void deleteList(Node *&head)
{
    // recursive method to delete the list
    //  if (head == NULL)
    //      return;
    //  deleteList(head->next);

    // deleting the list without temp variable , by modifying head pointer
    while (head != NULL)
    {
        Node *nextNode = head->next;
        delete (head);
        head = nextNode;
    }
    // deleting list by using temp variable

    //     while(head!= NULL){
    //         Node *temp = head;
    //         head = head-> next;
    //         delete (temp);

    //     }
}
int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7};
    Node *head = new Node(arr[0]);

    insertAtEnd(head, arr[1]);
    print(head);

    insertAtEnd(head, arr[2]);
    print(head);

    insertAtEnd(head, arr[3]);
    print(head);

    insertAtEnd(head, arr[4]);
    print(head);

    insertAtEnd(head, arr[5]);
    print(head);

    insertAtEnd(head, arr[6]);

    print(head);

    insertAtPosition(head, 24, 2);
    print(head);

    insertAfter(head, 24, 77);
    print(head);

    deleteNode(head, 4);
    print(head);
}