#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    This base of iterator();
    //use iterator and print value or auto iterator call and print value
    list<int>::iterator it;
    for (it=l1.begin(); it !=l1.end(); it++)
    {
        cout<<*it<<" ";
    }
    OR auto call:
    for(auto it:l1){
        cout<<it;

    }

    ****************
    pushback() >> data inset back side or last index
    pushfront() >> data insert front side first index 
    front() >> piont front value
    back() >> back index piont
    pop_front() >> fornt idex remove
    pop_back() >> last inex remove
    size() >> list size
    clear() >> list clear
    empty() >> check empty or not
    insert() >> l1.insert(l1.begin(),5);
    or Process:
    list<int>::iterator it;
    it=l1.begin();
    advance(it,2); //point of index 

    l1.insert(it,55);
    for (auto it:l1)
    {
    cout<<it<<" ";
    }



    erase(index_no) >> data remove  //l1.erase(l1.begin(),l1.end());
    OR :
     list<int>l1={1,2,3,4,5};
    //l1.erase(l1.begin(),l1.end());
    list<int>::iterator it;
    it=l1.begin();
    advance(it,1);
    list<int>::iterator it2;
    it2=l1.begin();
    advance(it2,4);

    l1.erase(it,it2);
    for (auto it:l1)
    {
    cout<<it<<" ";
    }

    remove(index_no) >> data remove
    reverse() >>reverse  //l1.reverse()
    unique() >> pasa pasi same value rakbe nh
    merge() >> 2 list add and sorted.and l2>l1 shifted . and l2 clear. and l1,l2 must be sorted
    Example:
     list<int>l1={1,2,3,3,4,5};
    list<int>l2={3,8,8,9,40,40};
    l1.merge(l2);
    for(auto it:l1)cout<<it<<" ";
    cout<<l2.size(); //this is zero
    
    */

   list<int>l1={1,2,3,3,4,5};
   list<int>l2={3,8,8,9,40,40};
    l1.merge(l2);
    for(auto it:l1)cout<<it<<" ";
    cout<<l2.size(); //this is zero
    
    

}