#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    void display(){
        cout<<"Base"<<"\n";
    }
};

class derive:public base{
    public:
    void display(){
        cout<<"Drive"<<"\n";
    }
};

int main(){
    derive ob1; //derive class object 
    base ob2; //base class object
    ob1.display(); 
    ob2.display();
    
}