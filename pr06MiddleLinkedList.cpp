#include<iostream>
using namespace std;


//!     Floyd's tortoise and hare
//todo  Floyd's cycle-finding algorithm
/*
It is a pointer algorithm that uses only two pointers, 
which move through the sequence at different speeds. 
It is also called the "tortoise and the hare algorithm", 
alluding to Aesop's fable of The Tortoise and the Hare.
*/

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};



Node* middle1(Node* &head){
   Node* temp=head;
   int cnt=0;
   while (temp!=NULL)
   {
     cnt++;
     temp=temp->next;
   }

    temp=head;
    cnt=(cnt+1)/2;
   while (temp!=NULL)
   {
     cnt--;
     if(cnt==0)break;
     temp=temp->next;
   }
   
   return temp;
}

Node* middle2(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while (head!=NULL && head->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}




int main(){

}