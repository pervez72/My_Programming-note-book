#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    this work FIFO
    Another fucntion is same 
    push() >> push_back() work is jast push() use
    pop() >>  fist data pop

    emplace() >> push and empalce is same
    swap() >> q1.swap(q2); here q1 all value swap to q2
    

    Pirinting Method:

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop(); 
    }
    
    Or :
    while(q.size()>0)






    */
   queue<int>q1,q2;
   
   q1.emplace(10);
   q1.emplace(11);
   q1.emplace(15);

   q2.emplace(0);
   q2.emplace(0);
   q2.emplace(0);
    
    q1.swap(q2);
    while (!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop(); 
    }
    




}