#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(str!="")
    cin>>str;
    cout<<str;
    
            for (int j = 0; j < str.size(); j++)
            {
                if (str[j]!='*')
                {
                    cout<<str[j];
                }
                cout<<"->";
            }
            cout<<endl;
    
    
}