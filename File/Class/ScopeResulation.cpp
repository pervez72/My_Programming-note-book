#include<bits/stdc++.h>
using namespace std;

class myclass{
    public:
        int sum();
};

int myclass::sum(){
    int a=10,b=10;
    int c=a+b;
    return c;
}
int main(){
    myclass obj;
    cout<<obj.sum();
}
