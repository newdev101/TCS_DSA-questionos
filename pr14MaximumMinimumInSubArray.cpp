#include<iostream>
#include<vector>

using namespace std;
vector<int> maximumElement(vector<int>& arr, int k) {
    vector<int>ans;
    int n=arr.size();

    for(int i=0;i<=n-k;i++){
        int maxi=arr[i];
        for(int j=i;j<i+k;j++){
            if(maxi<arr[j])maxi=arr[j];
        }
        ans.push_back(maxi);
    }
    return ans;
}

vector<pair<int,int>> minMaxInSubarray(vector<int>& arr, int k) {
    deque<int>minDeque,maxDeque;
    vector<pair<int,int>>ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
      if(!minDeque.empty() && minDeque.front()<=i-k)minDeque.pop_front();
      if(!maxDeque.empty() && maxDeque.front()<=i-k)minDeque.pop_front();


      while(!minDeque.empty() && minDeque.back()>=arr[i])minDeque.pop_back();
      while(!maxDeque.empty() && maxDeque.back()<=arr[i])minDeque.pop_back();

      minDeque.push_back(i);
      maxDeque.push_back(i);
      if(i>=k-1)ans.push_back({arr[minDeque.front()],arr[maxDeque.front()]});
    }
    return ans;
}





int main(){

}