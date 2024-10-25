//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
         Node* Where_is_nine = nullptr,*temp = head;
        Node*prev = head;
        while (temp != nullptr) {
            if(temp->data == 9 ) {
                if(Where_is_nine==nullptr)Where_is_nine = prev;
            } else {
                Where_is_nine = nullptr;
            }
            prev = temp;
            temp = temp->next;
        }
        
        if(Where_is_nine == nullptr) {
            prev->data += 1;
            return head;
        }
        // Node* n = new Node(1);
        // Node*n = Where_is_nine
        
        Node* t = Where_is_nine->next;
        Where_is_nine->data += 1;
        while (t) {
            t->data = 0;
            t = t->next;
        }
        if(Where_is_nine == head){
            Node* x = new Node(1);
            x->next = head;
            head = x;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends