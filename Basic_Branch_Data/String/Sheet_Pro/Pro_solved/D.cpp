#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;

    int x=s1.size();
    int y=s2.size();
    s3=s1+s2;
         char temp1;
        temp1=s1[0];

        char temp2;
        temp2=s2[0];

        s1[0]=temp2;
        s2[0]=temp1;

    cout<<x<<" "<<y<<"\n";
    cout<<s3<<"\n";

    cout<<s1<<" "<<s2;
    



}
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;

    int x=s1.size();
    int y=s2.size();
    s3=s1+s2;
         char temp1;
        temp1=s1[0];

        char temp2;
        temp2=s2[0];

        s1[0]=temp2;
        s2[0]=temp1;

    cout<<x<<" "<<y<<"\n";
    cout<<s3<<"\n";

    cout<<s1<<" "<<s2;
    



}