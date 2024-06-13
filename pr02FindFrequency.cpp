#include<iostream>
#include<unordered_map>
using namespace std;

void frequency(const string& str){
    unordered_map<char,int>unmap;
    for(auto it:str)unmap[it]++;

    for(const auto& pair:unmap)cout<<pair.first<<" "<<pair.second<<endl;
}

int main(){
    frequency("hello");
}