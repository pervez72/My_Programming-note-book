#include<bits/stdc++.h>
using namespace std;

int main(){

/*
    Queue and Priority is same
    Defult Dessending Order work :
    * lerge value priority is high.this poisition is top,and index ignor

    top() >> most high value 
    pop() >>most high or top value is deleted
    swap() >>  pq.swap(pq1);
    


    Print Process:
    while (!pq.empty())
    {
        cout<<pq.top();
        pq.pop();
    }

    now i sort assending Order work:
    priority_queue<int,vector<int>,greater<int> >pq;


*/

    //priority_queue<int,vector<int>,greater<int> >pq;
    priority_queue<int>pq,pq1;
    pq.push(1);
    pq.push(0);
    pq.push(10);
    pq.push(05);

    pq1.push(10);
     pq1.push(101);
      pq1.push(14);
       pq1.push(10);

       pq.swap(pq1);
    while (!pq.empty())
    {
        cout<<pq.top()<< " " ;
        pq.pop();
    }
    cout<<"\n";
    while (!pq1.empty())
    {
        cout<<pq1.top()<< " " ;
        pq1.pop();
    }


}