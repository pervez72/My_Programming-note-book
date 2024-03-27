#include<bits/stdc++.h>
using namespace std;

int main(){
    //ANOTHER WAY:
    // int element,temp,sorted;
    // cin>>element;
    // int a[element];

    // //input section
    // for (int i = 0; i < element; i++)
    // {
    //     cin>>a[i];
    // }
    
    // //sorting section
    // for (int unsorted=1; unsorted<element; unsorted++)
    // {
    //     temp=a[unsorted];
    //     sorted=unsorted-1;

    //     while (sorted>=0 && a[sorted]>temp)
    //     {
    //         a[sorted+1]=a[sorted];
    //         sorted--;
    //     }
    //      a[sorted+1]=temp;
        
    // }
    
    // for(int sorted = 0; sorted< element; sorted++)
    // {
    //     cout<<a[sorted] << " ";
    // }
    

    // NORMALLY:

    int n,j,temp,i;
    cin>>n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (i=1; i<n; i++) //unsorted element
    {
        temp=a[i];
        j=i-1; //sorted value start
        while (j>=0 && a[j]>temp) 
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;  
    }
    
    for (j=0; j <n; j++)
    {
        cout<<a[j]<<" ";
    }
    








    
}
