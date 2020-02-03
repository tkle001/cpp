/* 
    https://www.hackerrank.com/challenges/30-linked-list-deletion/copy-from/134284566
    Input: 
        removeDuplicates function: The first line contains an integer, N, the number of nodes to be inserted.
        The N subsequent lines each contain an integer describing the data value of a node being inserted at the list's tail.
    Output:
        Your removeDuplicates function should return the head of the updated linked list. 
        The locked stub code in your editor will print the returned list to stdout.
*/
#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;	

class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

class Solution{
    public:
        Node* removeDuplicates(Node * const head)
          {
              //Write your code here
              if ( head ) {
                  Node *last = head;
                  for (Node *temp = head->next; temp ; temp = temp->next) {
                      if ( last->data == temp->data ) {
                          last->next = temp->next;
                          //delete(temp);
                      } else {
                          last = temp;
                      }
                  }
              }
              return head;
          }
          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}