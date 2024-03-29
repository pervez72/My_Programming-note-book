#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    map dec >> map<int,int>mp; first index is key/index
    insert() >> mp.insert({1,12}); 
    at(),mp[key] >> output
    mp[1]=mp[1]+100 >> value update or value assgin

    
    output:
    for (auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
    
    
    */

   map<int,string> mp;

    mp.insert({2,"pp"});
    mp.insert({1,"fsfe"});
    mp.insert({3,"sdfs"});
    mp.insert({4,"sdfhsdnk"});

    
    
    for (auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
    
    
    // mp<int,int>::iterator it;

    // for ( it =mp.begin(); it!=mp.end(); it++)
    // {
    //    cout<<it->first<<" " <<it->second<<" ";
    // }
    









}