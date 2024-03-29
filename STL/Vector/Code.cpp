#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    verctor name=v
    Vector data insert: push_back(data)
    output: cout<<v[index_no] or 
             v.at(index_no):no store gurbase value show out od range

    size() >> see size
    front() >> see first index
    back() >> last index
    clear() >> vector clear 

    empty() >> check empty

    pop_back() >> last index delete 

    begin() >> do the first value point // [begin()+index_no] >> 0 to till target index.

    end() >> last index point 

    erase() >> specfic index data delete //v.erase(v.begin()+0,v.end()); this function start point and end point delete
    insert() >> v.insert(v.begin()+2,3,44); // same vaule multiple index

    swap(index1,index2) >> swaping

    sort(strat_index,end_index) >> assending sorting
    
    reverse(strat_index,end_index) >> reverse
    
    iterator() >> less time complexity.it point vector memory index like pointer
    Example iteration:
    vector<int>v1={1,2,3,4,5}
    vector<int>::iterator iterator_name;
    iterator_name=v1.begin()+0;
    cout<<*iterator_name;
    for (iterator_name=v1.begin(); iterator_name<v1.end; iterator_name++)
    {
        cout<<*iterator_name<<" ";
    }
                        




    */
    vector<int>v1; 
    v1.push_back(100);
    v1.push_back(2);
    v1.push_back(0);
    v1.push_back(10);

    vector<int>::iterator iterator_name;
    //iterator_name=v1.begin()+0;
    //cout<<*iterator_name;
    for (iterator_name=v1.begin(); iterator_name<v1.end; iterator_name++)
    {
        cout<<*iterator_name<<" ";
    }
    

}