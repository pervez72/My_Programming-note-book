#include<bits/stdc++.h>
using namespace std;
int main(){
//another way:
//  int array[ELEMENTS];
// // ELEMENTS হল মোট এলিমেন্ট সংখ্যা
// for( int i = 0; i < ELEMENTS - 1; i++ ) {
//   for( int j = ELEMENTS - 1; j > i; j-- ) {
//     if( array[i] > array[j] ) { // C++ এ <algorithm> হেডার ফাইলের
//       int temp = array[i];      // অন্তর্ভুক্ত swap() ফাংশন ব্যবহার করে
//       array[i] = array[j];      // সহজেই কাজটি করা যায় এভাবে
//       array[j] = temp;          // swap( array[i], array[j] );
//     }
//   }
// }

    int element,temp;
    cin>>element;
    int a[element];

     // input section
    for (int i =0; i < element; i++)
    {
        cin>>a[i];
    }
   
    //sorting section
    for (int step =0; step<element-1; step++)
    {
        for (int i=0; i <element-1-step; i++)
        {
            if (a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

            }
        }
        
    }
    
    //output 
    for (int i =0; i < element; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
