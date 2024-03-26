#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k=0;
    cin>>n;
    if (n>=1 && n<=1000)
    {

    int a[n],b[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    } //get a input
    
    sort(a,n+a);

    for(int i = 0; i < n; i++)
    {
        cin>>b[i];
    } //get b input
    sort(b,b+n);
    
    
        for (int i =0; i<n; i++)
        {
            if(a[i]!=b[i]){
                k++;
                break;
            }
        }
        
    }

    
    if(k==0) cout<<"yes";
     else cout<<"no";
    }
   
