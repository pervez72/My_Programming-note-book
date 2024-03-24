#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    if (n>=1 && n<=pow(10,6))
        {
       char ch[n];
       int a[n];

    //    for (int i = 0; i<n; i++)
    //    {
    //     char input;
    //     cin>>input;
    //     a[i]=input-'\0';
    //    }

        for (int i= 0; i <n; i++)
        {
            cin>>ch[i];
            // if (a[i]>='0' && a[i]<='9')
            // {
            //     a[i]=a[i];
            // }  
            
        }

        for (int i=0; i<n; i++)
        {
            a[i]=int(ch[i]);
            a[i]=a[i]-48;
        }
        

        int sum=0;
        for (int i =0; i<n; i++)
        {
            sum=sum+a[i];
        }
        





       //output array
    //    for (int i = 0; i <n; i++)
    //    {
    //     cout<<a[i]<<" ";
    //    }
       
        cout<<sum<<"\n";


}
}