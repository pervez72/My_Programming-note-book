//sub array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt,n,k;
    cin>>tt;
    if (tt>=1 && tt<=5)
    {
     while (tt--) //test case 
    {
    cin>>n;
    if (n>=1 && n<=100)
    {
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cout<<"subarray"<<endl;
        for (int i = 0; i <n; i++)
        {
            for (int j=i; j<n; j++)
            {
               for (k=i; k<=j; k++)
               {
                //cout<<a[k]<<" ";
               }
               int max=a[k]; //max value take out;
                for (int p=0; p<k; p++)
                {
                    if (max<a[p])
                    {
                        max=a[p];
                    }
                
                }
                cout<<max<<" ";
               //cout<<"\n";
            }
            
        }
        

        
    } // one test work done
    








    
    
    
    } //one test case work
    }
}
