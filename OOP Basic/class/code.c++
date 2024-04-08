#include<bits/stdc++.h>
using namespace std;

class my_class{
   
    public:
    int a; //this is a Public attribeute
    string s;

    private:
    int b; //this is a Private attribeute
   
    
    protected:
    int c; //this is a Protected attribeute

    public : // public method
        int math(){
            int d=10;
            cout<<d<<" ";
            return 0;
            b=10;
            cout<<b;
        }
    void display(){ //this is a public method
            cout<<a<<" ";
            cout<<s;
                }

    private:
        int math1(){
            int c=10;
            cout<<c;
            return 0;
        }

    protected:
        int math2(){
            int c=10;
            cout<<c;
            return 0;
        }

};

int main(){
  my_class obj;
  obj.a=50; // object value Assgine
  obj.s="direct access bescuse this is public"; 
  obj.math(); //access direct public method
  obj.math1();
  obj.display();
    
}