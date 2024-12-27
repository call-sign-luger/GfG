//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// A node of the doubly linked list
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to insert a node at the end of the Doubly Linked List
void push(DLLNode **tailRef, int new_data) {
    // Allocate node
    DLLNode *newNode = new DLLNode(new_data);

    // Since we are adding at the end, next is NULL
    newNode->next = NULL;

    newNode->prev = (*tailRef);

    // Change next of tail node to new node
    if ((*tailRef) != NULL)
        (*tailRef)->next = newNode;

    (*tailRef) = newNode;
}

// Function to print nodes in a given doubly linked list
void printList(DLLNode *head) {
    // Forward traversal
    if (head == NULL)
        return;

    DLLNode *last = NULL;
    while (head != NULL) {
        cout << head->data << " ";
        last = head;
        head = head->next;
    }
    cout << "\n";

    // Backward traversal
    while (last != NULL) {
        cout << last->data << " ";
        last = last->prev;
    }
    cout << "\n";
}


// } Driver Code Ends

/* Structure of the node of the list is as
class DLLNode {
public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    DLLNode *sortDoubly(DLLNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Split the list into two halves
        DLLNode* mid = findMiddle(head);
        DLLNode* nextToMid = mid->next;
        mid->next = nullptr;
        nextToMid->prev = nullptr;

        // Recursively sort the two halves
        DLLNode* left = sortDoubly(head);
        DLLNode* right = sortDoubly(nextToMid);

        // Merge the two sorted halves
        return merge(left, right);
    }

  private:
    DLLNode* findMiddle(DLLNode* head) {
        DLLNode* slow = head;
        DLLNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    DLLNode* merge(DLLNode* left, DLLNode* right) {
        if (left == nullptr) return right;
        if (right == nullptr) return left;

        DLLNode* dummy = new DLLNode(0); // Dummy node
        DLLNode* curr = dummy;

        while (left != nullptr && right != nullptr) {
            if (left->data <= right->data) {
                curr->next = left;
                left->prev = curr;
                left = left->next;
            } else {
                curr->next = right;
                right->prev = curr;
                right = right->next;
            }
            curr = curr->next;
        }

        if (left != nullptr) {
            curr->next = left;
            left->prev = curr;
        }

        if (right != nullptr) {
            curr->next = right;
            right->prev = curr;
        }

        DLLNode* result = dummy->next;
        result->prev = nullptr; // Set the prev pointer of the result's head to null
        delete dummy;
        return result;
    }
};


//{ Driver Code Starts.

// Driver code
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

        if (arr.empty()) {
            cout << "List is empty.\n";
            continue;
        }

        DLLNode *head = new DLLNode(arr[0]);
        DLLNode *tail = head;

        // Check if the array is empty
        for (size_t i = 1; i < arr.size(); ++i) {
            push(&tail, arr[i]);
        }

        Solution ob;
        head = ob.sortDoubly(head);

        printList(head);
    }
    return 0;
}

// } Driver Code Ends