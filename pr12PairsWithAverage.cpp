#include<iostream>
#include<unordered_set>

using namespace std;

int findPairsWithAverage(vector<int>&arr){
    unordered_set<int>s(arr.begin(),arr.end());
    int cnt=0;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(s.find((arr[i]+arr[j])/2)!=s.end()){
                cnt++;
            }
        }
    }
    return cnt;

}

int main(){
}
