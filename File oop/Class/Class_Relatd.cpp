#include<bits/stdc++.h>
using namespace std; //standard input output function

class myclass{

    int a;
    int sum(int a,int b){ //this is private attribute
        return a+b;
    }
    public:
        int b;
        int sub(int a,int b){ //public Atribute 
            return a-b;
        }
    protected:
        int mul(int a,int b){ //Protected Attribute
            return a*b;
        }

};

int main(){

        myclass obj;
        int a=obj.sub(10,5); // Allowed(public)
        //int b=obj.sum(10,8); //not Allowed (Private)
        // int c=obj.mul(10,7);//not Allowed(Protected),that is acessable for inheritence funtion
        cout<<a<<"\n";
        int c=obj.b=7; //public varible data insert
        cout<<c<<"\n";
    




}