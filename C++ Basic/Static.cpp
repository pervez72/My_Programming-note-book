// #include<bits/stdc++.h>
// using namespace std;
// int math(){
//     int a=0; //normal variable in function
//      a++;
//     cout<<a<<" ";
//     return 0;
// }
// int math1(){
//    static int a=0; //static variable in function 
//      a++; 
//     cout<<a<<" ";
//     return 0;
// }

// int main(){
//      cout<<"Normal:"<<"\n";
//     for (int i = 0; i < 5; i++)
//     {
//           math(); //when fc called a value is resest
//     }
//     cout<<"\n";
//     cout<<"Static:"<<"\n";
//     for (int i = 0; i < 5; i++)
//     {
//           math1(); //when fc called a value is stored last updated value.
//     }
    
// }

//                  ----------------------------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// class sta{
//     public: 
//     static int a;
//     void dis(){
//         a++;
//     cout<<a<<" ";
//     }

//     //normal function 
//     public:
//       int b=0; 
//     void dis1(){
//         b++;
//     cout<<b<<" ";
//     }
    
// };
// int sta::a=0;


// int main(){
//     sta obj;
//       cout<<"Static:"<<"\n";
//     for (size_t i = 0; i < 5; i++)
//     {
//     obj.dis();
//     }

//     cout<<"\n";
//     cout<<"normal"<<"\n";

//     for (size_t i = 0; i < 5; i++)
//     {
//     obj.dis1();
//     }

//     //hear nomal and static is same behaveur mejor differce is declaration in satatic var >> int sta::a=0;


// }


#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    // static member function
    static void dis(){
        cout<<"This is statis function";
    }
};
int main(){
    A obj; 
    obj.dis(); //thats work it normal
    cout<<"\n";
    // invoking a static member function
    A ::dis();
}