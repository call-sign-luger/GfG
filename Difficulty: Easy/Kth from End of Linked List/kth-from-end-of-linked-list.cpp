//{ Driver Code Starts
// Initial Template for C++
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
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        Node*ptr=head;
        int count=0;
        while(ptr){
            count++;
            ptr=ptr->next;
        }
        int diff=count-k;
        if(k>count){
            return -1;
        }
        Node*temp=head;
        int i=0;
        while(i<diff){
            temp=temp->next;
            i++;
        }
        return temp->data;
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

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        int x;
        cin >> x;
        cin.ignore();

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        Solution ob;
        cout << ob.getKthFromLast(head, x) << endl;
    }
    return 0;
}
// } Driver Code Ends