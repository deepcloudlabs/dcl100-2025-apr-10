#include "LinkedList.h"
#include <iostream>
using namespace std;

Node* Insert(Node* head,Info &data){
    Node *p= new Node;	
    p->hold= data;
    if (head==NULL)
       p->next= NULL;
    else
       p->next= head;
   return p; 
}

void toString(Node *head){
    Node *p=head;
    while(p){
       cout << endl << p->hold.studentID << " - " 
	    << p->hold.name << " : Average= " << p->hold.average ;
       p= p->next;
    }
}

int getLength(Node *head){
   int length=0;
   Node *p=head;
   while(p){
      length++;
      p=p->next;
   }
   return length;
}

Node* Sort(Node *head,int getValue(Node*)){
   Node *p,*q,*r;
   int length= getLength(head);
   for (int i=0;i<length-1;i++){
       p=head;
       q=head;
       r=head->next;
       while (q && r){
             if (getValue(q)>getValue(r)){
		if (p==q){
		   head= r;
		}
                p->next= r;
	        q->next= r->next;
	        r->next= q;
	        p=r;
	        r=q->next;
             }
             else{
                p=q;
	        q=r;
	        r=r->next;
             }
       }
   }
   return head;
}
