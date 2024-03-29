#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    push() >> last index value push
    pop() >> last index or top value is remove

    
    */

   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);




    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    






}
