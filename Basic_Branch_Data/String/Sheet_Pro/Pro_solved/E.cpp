#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int y=s.size();
    int a[y];

    for (int i =0; i<s.size(); i++)
    {
        int x=(int)s[i]-48;
        a[i]=x;
        
    }
    int sum=0;
    for (int i = 0; i <s.size(); i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    
}