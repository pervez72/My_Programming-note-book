#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,col,row;
    cin>>n>>m;

    if ((n>=2 && n<=100)&&(m>=2 && m<=100))
    {
        int a[n][m];

        for (int row=0; row<n; row++)
        {
           for (int col=0; col<m; col++)
           {
                cin>>a[row][col];
           }
           
        } // get input
        
       int x;
       bool flag=false;
       cin>>x;
       if (x>=0 && x<=pow(10,5))
       {
        
       for (int row=0; row<n; row++)
        {
           for (int col=0; col<m; col++)
           {
                if (x==a[row][col])
                {
                    flag=true;
                    break;
                }
                
           }
           
        }

        if(flag==true)cout<<"will not take number"<<"\n";
        else cout<<"will take number"<<"\n";


       }
       
        
    }

}


 
        // for (int row=0; row<n; row++)
        // {
        //    for (int col=0; col<m; col++)
        //    {
        //         cout<<a[row][col]<<" ";
        //    }
           
        // }