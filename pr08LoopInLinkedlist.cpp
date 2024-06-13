#include<iostream>
#include<unordered_map>
using namespace std;


//!     Floyd's tortoise and hare
//todo  Floyd's cycle-finding algorithm

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

bool findLoop(Node* &head){
    unordered_map<Node* ,int>unmap;
    Node* temp=head;
    while(temp!=NULL){
        if(unmap.find(temp)!=unmap.end())return 1;
        unmap[temp]++;
        temp=temp->next;
    }
    return 0;
}

bool findLoop2(Node* &head){
    Node* fast=head;
    Node* slow=head;
    while (fast!=NULL && fast->next!=NULL)
    {
     slow=slow->next;
     fast=fast->next->next;
     if(slow==fast)return 1;   
    }
    return 0;
}



int main(){

}