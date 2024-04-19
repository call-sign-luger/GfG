//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

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

class Solution{ 
public:
    // Function to reverse a linked list
    Node* reverse(Node* head){
        // If the list is empty or has only one node
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node*prev=NULL,*next=NULL;
        Node*curr=head;
        // Traverse through the list
        while(curr){
            // Keep track of the next node
            next=curr->next;
            // Reverse the link
            curr->next=prev;
            // Move prev and curr one step forward
            prev=curr;
            curr=next;
        }
        // Return the reversed list
        return prev;
    }
    
    // Function to reorder the list
    void reorderList(Node* head) {
        // If the list is empty or has less than three nodes
        if(head==NULL||head->next==NULL||head->next->next==NULL){
            return;
        }
        Node*slow=head;
        Node*fast=head;
        Node*prev=NULL;
       
        // Find the middle of the list
        while(fast&&fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
       
        // Disconnect the list from the middle
        prev->next=NULL;
       
        // Reverse the second half of the list
        Node*temp=reverse(slow);
       
        Node*first=head;
        Node*dig=first->next;
        Node*second=temp;
        Node*sec_next=temp->next;
       
        // Merge the two halves
        while(dig!=NULL){
            first->next=second;
            second->next=dig;
            first=dig;
            second=sec_next;
            dig=dig->next;
            sec_next=sec_next->next;
        }
       
        // Connect the last node
        first->next=second;
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends