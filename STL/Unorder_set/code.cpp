#include<bits/stdc++.h>
using namespace std;

int main(){
    /*

    * A Set is an ordered sequence of unique keys.
     An unordered_set is a set in which a key can be stored in any order, so unordered. 
     Set is implemented as a balanced tree structure making
      it possible to maintain order between the elements (by specific tree traversal).

    * Set:
        1.Unique
        2.Ordered
    *Unorder_set:
        1.Unique
        do not ordered 
    

    bucket() >> create a hash table. and create box 


    */
   unordered_set<int> u;
   u.insert(2);
   u.insert(3);
   u.insert(4);
   u.insert(5);

    cout<<u.bucket_count();
    cout<<u.bucket(4); // kon value koto no function a ase seta dekbo
    cout<<u.bucket_size(4);



}