#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,min,k=0;
    string output="Lucky";
    string output1="Unlucky";
    cin>>n;

    if (n>=2 && n<=1000)
    {
       int a[n];
       for (int i = 0; i <n; i++)
       {
        cin>>a[i];
        if(a[i]>=-pow(10,5) && a[i]<=pow(10,5)){
            a[i]=a[i];
        }
       }
        //get input 
        min=a[0];
        for (int i =0; i < n; i++)
        {
            if (min>a[i])
            {
                min=a[i];
            }
            
        }
       
       for (int i = 0; i < n; i++)
       {
        if (min==a[i])
        {
            k++;
        }
        
       }
       
       if (k%2==0)
       {
        cout<<output1<<"\n";
       }
       else
            cout<<output<<"\n";
       
        



        
    
    
    
    
    } 
}