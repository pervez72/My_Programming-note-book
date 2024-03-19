#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,j,k=0;
    cin>>n;

    if(n>=1 && n<=pow(10,5)){

        long long a[n];
        for (int i = 0; i<n; i++)
        {
        cin>>a[i];
        if (a[i]>=1 && a[i]<=pow(10,9))
        {
            a[i]=a[i];
        }
         } //input done

        //reverse process

        for (i=n-1,j=0; i>=n/2,j<=n/2; i--,j++)
        {
            
            if(a[i]!=a[j]){ 
                 k++;
                 break;
             }
               
        }
        

        if(k==0)cout<<"YES";
        else cout<<"NO";

       
   
    
    









    }

}
