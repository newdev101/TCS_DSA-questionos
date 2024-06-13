#include<iostream>
#include<stack>


/*
    stack.push(d)
    stack.pop()
    stack.top()
    stack.size()
    stack.empty()
*/
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


void reverseStack(Node* &head){
    stack<int>st;
    Node* temp=head;
    while(temp != NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while (temp!=NULL)
    {
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
}

Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* present=head;
    Node* front;
    while(present!=NULL){
        front=present->next;
        present->next=prev;
        prev=present;
        present=front;
    }

    return prev;
}




int main(){

}