
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    if (n>=2 && n<=1000)
    {
      int a[n];
      
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max=a[0],min=a[0];
    int maxindex=0,minindex=0;

    for (int i = 0; i < n; i++)
    {
        if (max<a[i]){
            max=a[i];
            maxindex=i;
        }
        if(min>a[i]){
            min=a[i];
            minindex=i;
        }
        
    }

    int temp;
    temp=a[maxindex];
    a[maxindex]=a[minindex];
    a[minindex]=temp;


    for (int i = 0; i < n; i++)
     {
    //     if (a[i]==max)
    //     {
    //         a[i]=min;
    //     }

    //      if (a[i]==min)
    //     {
    //         a[i]=max;
    //     }
        
      cout<<a[i]<<" ";
    }
    



    
    }
    
}