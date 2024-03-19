#include<bits/stdc++.h>
using namespace std;

int a(){
    int a=10;
    cout<<a<<"\n";
    return 0;
}
int a(int a){
    int b=20;
        b=a+b;
    cout<<b<<"\n";
    return 0;
}

int a(int a,int b){
    int c=a*b;
    cout<<c<<"\n";
    return 0;
} 

int main(){
    a();
    a(10);
    a(10,20);
}