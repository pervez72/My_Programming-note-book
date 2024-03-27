#include<bits/stdc++.h>
using namespace std;
 
int bi_search(int a[],int n,int data){
 
    int l,r,mid;
    l=0;
    r=n-1;
 
    while (l<=r)
    {
        mid=(l+r)/2;
 
        // if (a[mid]==data)
        // {
        //   return mid;
        // }
        // else if(data>a[mid]){
        //     l=mid+1;
        // }
        // else
        //     r=mid-1;
 
 
        //another Process:
 
        if(data>a[mid]) l=mid+1;
        else if(data<a[mid]) r=mid-1;
        else
            return mid;
    }
    return -1;
}
 
int main(){
 
    int n;
    cin>>n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        } //take input
 
        sort(a,a+n);
        //serching start input
        int x;
        cin>>x;
        int exits=bi_search(a,n,x);
            if (exits==-1)
            {
                cout<<"not found"<<"\n";
            }
            else
                cout<<"found"<<"\n";
        }
     