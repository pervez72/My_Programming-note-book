#include<bits/stdc++.h>
using namespace std;
// This technique is poor codeing system so next setp see the update system.
/*
class a{
    public:
    inline void dispaly(){
        cout<<"that is inline function";
    }
};

int main(){
    a obj;
    obj.dispaly();
}
*/

class myclass{
    public:
    inline void display();
};

//use scop resulation and access inline function data;

//how to use :inline_Keyword data_typename class_name::function_name(){data;}
inline void myclass::display(){
    cout<<"This is inline Fucntion"<<"\n";
}

int main(){

    myclass obj;
    obj.display();
}



