#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,q;
    cin>>n>>q;
        long long a[n],sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }// take input array

        //query input
        while(q>0)
        {
        int l,r;
        cin>>l>>r;
        for (int i=l-1; i<r; i++)
        {
            sum+=a[i];
        }
        cout<<sum<<"\n";
        sum=0;
        q--;
        }     
}