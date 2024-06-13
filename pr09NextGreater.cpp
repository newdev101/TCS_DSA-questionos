#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

vector<int> nextGreater(vector<int>&arr){
    stack<int>st;
    int n= arr.size();
    vector<int>ans(n);

    for(int i=0;i<n;i++){
        while(st.empty()!=false && st.top()<=arr[i])st.pop();
        if(st.empty()==true)ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
}


vector<int> nextGreater1(vector<int>&arr){
    stack<int>st;
    int n= arr.size();
    vector<int>ans(n);

    for(int i=0;i<2*n;i++){
        while(st.empty()!=false && st.top()<=arr[i%n])st.pop();

        if(i<n){
        if(st.empty()==true)ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
        }
    }
}




int main(){

}