#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    if (n>=1 && n<=pow(10,6))
        {
       char a[n];

    //    for (int i = 0; i<n; i++)
    //    {
    //     char input;
    //     cin>>input;
    //     a[i]=input-'\0';
    //    }

        for (int i= 0; i <n; i++)
        {
            cin>>a[i];
            // if (a[i]>='0' && a[i]<='9')
            // {
            //     a[i]=a[i];
            // }  
            
        }

        
        





       //output array
       for (int i = 0; i <n; i++)
       {
        cout<<a[i]<<" ";
       }
       



}
}