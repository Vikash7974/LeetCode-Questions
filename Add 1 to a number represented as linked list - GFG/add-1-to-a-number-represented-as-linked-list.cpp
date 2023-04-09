//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

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
 Node* reverse(Node *head)
 {
     Node* curr=head;
     Node* nest=NULL;
     Node* prev=NULL;
     while(curr)
     {
        nest=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nest;
     }
     return prev;
 }
class Solution
{
    public:
    Node* addOne(Node *head) 
    {
       head=reverse(head);
       Node * temp=head;
       int carry=1;
       Node * p=NULL;
       while(temp){
           int ans =temp->data+carry;
           temp->data=ans%10;
           ans/=10;
           carry=ans;
           p=temp;
           temp=temp->next;
       }
       if(carry){
           p->next=new Node(carry);
       }
       return reverse(head);
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends