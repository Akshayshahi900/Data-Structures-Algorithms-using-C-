//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


// } Driver Code Ends

/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:

  void insertAtTail(Node *&tail , Node*curr){
    tail ->next = curr;
    tail = curr;
    
}
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        
        // Node *temp = head;
        // int zerocnt =0;
        // int onecnt = 0;
        // int twocnt =0;
        
        // while(temp!= NULL){
        //     if(temp->data==0){
        //         zerocnt++;
        //     }
        //     else if(temp->data==1){
        //         onecnt++;
        //     }
        //     else if(temp->data == 2){
        //         twocnt++;
        //     }
        //     temp = temp->next;
        // }
        
        // temp = head;
        
        // while(temp!=NULL){
        //     if(zerocnt !=0){
        //         temp->data =0;
        //         zerocnt--;
        //     }
        //     else if(onecnt!=0){
        //         temp->data = 1;
        //         onecnt--;
        //     }
        //     else if(twocnt!=0){
        //         temp->data = 2;
        //         twocnt--;
        //     }
        //     temp =temp ->next;
        // }
        // return head;
        

        //2nd approach by changing link
        if (!head || !head->next) return head;
        
        Node*zeroHead = new Node(-1);
        Node*zeroTail = zeroHead;
        
        Node*oneHead = new Node(-1);
        Node *oneTail = oneHead;
        
        Node *twoHead = new Node(-1);
        Node *twoTail = twoHead;
        
        
        //made 3 lists 
        Node *temp = head;
        while(temp!= NULL){
            int val = temp->data;
            if(val==0){
                insertAtTail(zeroTail , temp);
            }
            if(val==1){
                insertAtTail(oneTail , temp);
            }
            if(val==2){
                insertAtTail(twoTail , temp);
            }
            temp = temp->next;
        }
        
        zeroTail->next = (oneHead->next) ? oneHead->next : twoHead->next;
        oneTail->next = twoHead->next;
        twoTail->next = NULL;
        head = zeroHead->next;
        
        delete(zeroHead);
        delete(oneHead);
        delete(twoHead);
        
        return head;
        
    }
};



//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        Node* newHead = ob.segregate(head);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends