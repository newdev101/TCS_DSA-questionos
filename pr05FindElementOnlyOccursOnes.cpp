#include<iostream>
#include<vector>
using namespace std;

int findOne(const vector<int>& arr){
    int ans=0;
    for(int i=0;i<arr.size(); i++){
        ans^=arr[i];
    }
    return ans;
}

int main(){

}