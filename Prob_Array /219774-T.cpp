#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum_main=0,sum_second=0,totalsum;
    cin>>n;

    if(n>=1&& n<=100){
        int a[n][n];

       
       for(int row=0; row<n; row++)
        {
           for (int col=0; col<n; col++)
           {
                cin>>a[row][col];
           }
           
        } // get input

    
        
        for(int row=0; row<n; row++)
        {
           for (int col=0; col<n; col++)
           {
                if (row==col) // Priciple diagonal sum
                {
                 sum_main+=a[row][col];   
                }
                if ((row+col)==(n-1)) //secondary Diagonal metrix
                {
                    sum_second+=a[row][col];
                }
                
           } 
        }
        totalsum=sum_main-sum_second;
           if (totalsum<0)
           {
            totalsum=totalsum*(-1);
            cout<<totalsum<<"\n";
           }
           else
                cout<<totalsum<<"\n";

    }
}