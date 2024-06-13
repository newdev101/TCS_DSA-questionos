#include<iostream>
#include<vector>

using namespace std;

int maxiSumBrut(const vector<int>& arr){
    int ans=INT_MIN;
    for(int i=0;i<arr.size();i++){
        int subArray_sum=0;
        for(int j=i;j<arr.size();j++){
            subArray_sum+=arr[j];
            ans=max(ans,subArray_sum);
        }
    }
    return ans;
}
//!     kadanesAlgo
int kadanesAlgo(const vector<int>& arr){
    int maxSum=INT_MIN;
    int tempSum=0;
    for(int i=0; i<arr.size(); i++){
        tempSum+=arr[i];
        maxSum=max(maxSum,tempSum);
        if(tempSum<0)tempSum=0;
    }
    return maxSum;
}

int main(){
    vector<int>arr={-1, -2, -3, -4};
    cout<<kadanesAlgo(arr);
}