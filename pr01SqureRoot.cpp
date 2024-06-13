#include<iostream>
using namespace std;

int squreRootLinear(int num){
    int ans=1;
    for(int i=1;i<=num;i++){
        if(i*i<=num)ans=i;
        else break;
    }
    return ans;
}

int squreRootBinary(int num){
    int l=1,h=num,ans=1;
    while(l<=h){
        int m = l+(h-l)/2;
        if(m*m<=num){
            ans=m;
            l=m+1;
        }
        else h=m-1;
    }
    return h;
}

int main(){
    cout<<squreRootBinary(8);

}