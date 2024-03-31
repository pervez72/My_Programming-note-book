#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    * Multimap and map is same but multi map support same value in key.
    * The essential difference between the two is that in a map the keys must be unique, 
      while a multimap permits duplicate keys. In both containers,
     the sort order of components is the sort order of the keys,
      with the values corresponding to keys determining the order for duplicate keys in a multimap.
    
    * upper_bound() >> colsed geter value point or end() value.
    * lower_bound()>> if eixit key ,point this key or colsed geter key point. / key not exits point gurbase value
    */
   c
   multimap<int,int>mp;
   mp.insert({1,2});
   mp.insert({2,25});
   mp.insert({3,5});
   mp.insert({4,2});
   mp.insert({5,8});
   mp.insert({6,20});


    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<"\n";
    }





}