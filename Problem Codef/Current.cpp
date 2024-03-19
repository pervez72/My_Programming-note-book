#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin>>n;
   if (n>0&&n<1000)
   {
      int a[n];
      for (int i = 0; i <n; i++)
      {
         cin>>a[i];
         if(a[i]>=-100 &&a[i]>=100){
            a[i]=a[i];
         }
      } //input section ok


      for (int step=0; step<n; step++)
      {
      for (int i=0;i<n; i++)
      {
         if (a[i]>a[i+1])
         {
            int temp=a[i];
            a[i+1]=temp;
            a[i]=a[1+i];
         }
         
      }
      
      }

      for (int i= 0; i<n; i++)
      {
         cout<<a[i];
      }
      
   }    
}
