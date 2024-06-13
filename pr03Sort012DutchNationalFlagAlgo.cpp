#include<iostream>
#include<vector>

using namespace std;

//!     Dutch national flag algorithm

void sort012(vector<int>& arr){
    int l=0,m=0,h=arr.size()-1;
    for(int i=0;i<arr.size(); i++){
        if(arr[m]==1)m++;
        else if(arr[m]==0){
            swap(arr[m],arr[l]);
            l++;
            m++;
        }
        else{
            swap(arr[h],arr[m]);
            h--;
        }
    }
}


int main(){
    vector<int>arr={0,1,2,0,1,2,2,2,2,1,1,1,0,0,0};
    sort012(arr);
    for(auto it:arr)cout<<it<<" ";
    cout<<endl;
}