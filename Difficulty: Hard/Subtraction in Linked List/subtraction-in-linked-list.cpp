//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x)
        : data(x)
        , next(nullptr) {}
};

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        head = head->next;
    }
    cout << '\n';
}


// } Driver Code Ends
// User function Template for C++

class Solution {
    int length(Node* head){
        int l=0;
        Node* temp=head;
        while(temp){
            l++;
            temp=temp->next;
        }
        return l;
    }
    
    bool isGreater(Node* head1,Node* head2){
        Node* temp1=head1,*temp2=head2;
        int l1=length(head1),l2=length(head2);
        if(l1 > l2){return true;}
        if(l1 < l2){return false;}
        bool isBiggerBefore=false;
        while(temp1 && temp2){
            if(temp1->data > temp2->data){isBiggerBefore=true;}
            if(temp1->data < temp2->data && !isBiggerBefore){return false;}
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
    
    Node* reverse(Node* head){
        if(!head || !head->next){return head;}
        Node* prev=NULL,*curr=head,*nxt;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
  public:
    Node* subLinkedList(Node* head1, Node* head2) {
        if(!head2){return head1;}
        if(!head1){
            head2->data*=-1;
            return head2;
        }
        if(!isGreater(head1,head2)){swap(head1,head2);}
        head1=reverse(head1);
        head2=reverse(head2);
        Node* dummy=new Node(-1),*temp=dummy,*temp1=head1,*temp2=head2;
        int borrow=0;
        while(temp1){
            int diff=borrow+temp1->data-(temp2 ? temp2->data : 0);
            if(diff < 0){
                borrow=-1;
                diff+=10;
            }
            else{
                borrow=0;
            }
            temp->next=new Node(diff);
            temp=temp->next;
            temp1=temp1->next;
            if(temp2){
                temp2=temp2->next;
            }
        }
        Node* res=reverse(dummy->next);
        while(res && res->data == 0){res=res->next;}
        if(!res){return new Node(0);}
        return res;
    }
};


//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        Node *head1 = nullptr, *tail1 = nullptr;
        Node *head2 = nullptr, *tail2 = nullptr;
        string input1, input2;

        cin >> input1 >> input2;
        for (char ch : input1) {
            int tmp = ch - '0';
            Node* new_node = new Node(tmp);
            if (!head1) {
                head1 = new_node;
                tail1 = new_node;
            } else {
                tail1->next = new_node;
                tail1 = new_node;
            }
        }

        for (char ch : input2) {
            int tmp = ch - '0';
            Node* new_node = new Node(tmp);
            if (!head2) {
                head2 = new_node;
                tail2 = new_node;
            } else {
                tail2->next = new_node;
                tail2 = new_node;
            }
        }

        Solution obj;
        Node* result = obj.subLinkedList(head1, head2);
        printList(result);
    }
    return 0;
}

// } Driver Code Ends