#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    
    all value exits uniqe and unique both

    insert() >> data add
    count() >> value count koto bar
    lower_bound() >> je value dibo sei value ke point korbe.so exact index value point 
    upper_bound() >> je value dibo sei value er kasa kasi bro value ke point korbe




    */

   multiset<int> s={1,2,3,4,5};

   //auto it=s.upper_bound(3);
   auto it=s.lower_bound(2);

    for(auto it1=it; it1!=s.end(); it1++){
        cout<<*it1<<" ";
    }
    
    






}