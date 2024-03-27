#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if ((n>=1 && n<=pow(10,5)) &&(m>=1 && m<=pow(10,5)))
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        } //get input

        int k=m;
        int counter=0;
        while (k>0)
        {
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if(a[i]==a[j]){
                    counter++;
                }
                    
            }
            
        }
        cout<<counter<<"\n";
        counter=0;
        k--; 
        }  



    }

    
}