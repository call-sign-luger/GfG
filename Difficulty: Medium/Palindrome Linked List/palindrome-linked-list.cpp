//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
    {
        //Your code here
        //Algorthims
        //1.get to the middle of linked list with the help of slow and fast pointer
        //2.Start reversing the node from middle of linked list till end ,
        //3.now compare two halves of linked list
        Node*slow=head,*fast=head;
        while(fast!=NULL&& fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node*prev=NULL;
        Node*temp;
        while(slow!=NULL)
        { 
            temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
            
        }
        while(prev!=NULL)
        {
            if(head->data!=prev->data) return false;
            head=head->next;
            prev=prev->next;
        }
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends