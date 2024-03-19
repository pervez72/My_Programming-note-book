#include<bits/stdc++.h>
using namespace std;
class myclass{
    int a;
    public:
        /*
        constructor and destructor Part.this method create and destroy auto metic
        lets see the example manually
        */
        myclass(){
        cout<<"Hello:I am Constructor Method ,i created now"<<"\n"; //constructor method
        }
        ~myclass(){
        cout<<"Hey:i am destructor method,Object Work is done so i destroyed constructor method"; //destructor method
        }
        void dis(){
        cout<<a;
        }
        int math(){
        int a,b;

        cout<<"Eneter Input A and  B:";
        cin>>a>>b;
        int c=a+b;
        return c;
        }


};



int main(){
        cout<<"Object Create done so auto constructor call"<<"\n";
        myclass obj; //when create a object auto call constructor method.and stock space for object;
        int d=obj.math();
        cout<<d<<"\n";
        //all work done call destructor method

}
