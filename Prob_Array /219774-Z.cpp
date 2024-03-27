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

    int n,m;
    cin>>n>>m;
    if((n>=1 && n<=pow(10,5)) &&(m>=1 && m<=pow(10,5)))
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        } //take input

        sort(a,a+n);

        while (m>0)
        {
            long long x;
            cin>>x;

            //serching start

            int exits=bi_search(a,n,x);
            if (exits==-1)
            {
                cout<<"not found"<<"\n";
            }
            else
                cout<<"found"<<"\n";
            m--;
        }
        
       
        




        
    }
    








}