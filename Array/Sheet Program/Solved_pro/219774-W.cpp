#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    if ((n>=1 && n<=100)&&(m>=1 && m<=100))
    {
        long long a[n][m];
        for (int row=0; row<n; row++)
        {
            for (int col=0; col<m; col++)
            {
                cin>>a[row][col];
            }
            
        }
        
        for (int row=0; row<n; row++)
        {
            for (int col=m-1; col>=0; col--)
            {
                cout<<a[row][col]<<" ";
            }
            cout<<"\n";
        }












    }
    
    }