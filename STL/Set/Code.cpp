#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    * Set All value is unique, and do auto sorted , and defult dessending order
    * Set is work is iterator base
    
    insert(value) >> data insert
    max_size() >> upto size hold this sise
    erase(value) >> fixed value remove
    find() >> value find ,auto it=s.find(4); 
    count() >> if value exits return 1 or 0.

    ***lower_bound() >> point of exact index of data,or closed value of that data,or end index point.
    ***upper_bound() >> that data will point to the closed value or end value . no  ponit exact value
    operator (=) >> another set value assign
    







    Output Process:
     set<int>:: iterator it;
    for (it =s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }

    Or:
    for(auto it: s)cout<<it<<" ";



    
    
    
    */


   set<int>s={1,2,3,4,5};

    //for(auto it: s)cout<<it<<" ";

  

    set<int>::iterator it;

    it=s.lower_bound(10);
    if(s.end()==it){
        cout<<"less then end";
    }
    else 
    {
    cout<<*it;
    }
     







}