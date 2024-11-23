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

    Node* segregate(Node* head) {
        Node* low = nullptr;
        Node* mid = nullptr;
        Node* high = nullptr;
        
        Node* lowHead = nullptr;
        Node* midHead = nullptr;
        Node* highHead = nullptr;
        
        Node* temp = head;
        
        while(temp){
            if(temp->data == 0){
                if(!low){
                    low = temp;
                    lowHead = low;
                } else {
                    low->next = temp;
                    low = low->next;
                }
            } else if(temp->data == 1){
                if(!mid){
                    mid = temp;
                    midHead = mid;
                } else {
                    mid->next = temp;
                    mid = mid->next;
                }
            } else {
                if(!high){
                    high = temp;
                    highHead = high;
                } else {
                    high->next = temp;
                    high = high->next;
                }
            }
            temp = temp->next;
        }
        
        if(lowHead) {  
            low->next = midHead ? midHead : highHead;
        }

        if(midHead) {  
            mid->next = highHead;
        }

        if(high) {  
            high->next = nullptr;
        }

        if(lowHead) return lowHead;
        if(midHead) return midHead;
        return highHead;
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