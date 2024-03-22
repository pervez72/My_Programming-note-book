#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin>>n;
   if (n>0 && n<1000)
   {
      int a[n];
      for (int i=0; i<n; i++)
      {
         cin>>a[i];
         if(a[i]>=-100 &&a[i]<=100){
            a[i]=a[i];
         }
      } //input section ok


      for (int step=0; step<n-1; step++)
      {
      for (int i=0;i<n-step-1; i++)
      {
         if (a[i]>a[i+1])
         {
            int temp=a[i];
            a[i]=a[1+i];
            a[i+1]=temp;
            
         }
         
      }
      
      }

      for (int i=0; i<n; i++)
      {
         cout<<a[i]<<" ";
       
         
      }
      
   }    
}
