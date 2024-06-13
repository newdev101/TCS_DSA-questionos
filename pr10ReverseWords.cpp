#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverseWord(string& str){
    reverse(str.begin(),str.end());
    int n=str.length();
    int start=0,end=0;
    while(end<n){
        while (end!=n-1 && str[end]!=' ')
        {
            end++;
        }
        reverse(str.begin()+start,str.begin()+end);
        start=end+1;
        end=start;
    }
}

int main(){
    string str="i am rajat jana";
    reverseWord(str);
    cout<<str<<endl;
}

