/*
Merge Sort Algorithm.
Implemented by Hasan Abdullah.
Blog: hellohasan.com
Facebook: facebook.com/hasan.cse91
*/
#include<bits/stdc++.h>
#define arr_size 100
using namespace std;


int arr[arr_size];
int temp[arr_size], counter = 0;

void merging(int startPoint, int midPoint, int endPoint)
{
    int firstArrCnt,secArrCnt,i;
    firstArrCnt = startPoint;
    secArrCnt = midPoint + 1;

    for(i = firstArrCnt; firstArrCnt<=midPoint && secArrCnt<=endPoint; i++)
    {
        if(arr[firstArrCnt] < arr[secArrCnt])
            temp[i] = arr[firstArrCnt++];
        else
            temp[i] = arr[secArrCnt++];
    }

    while(firstArrCnt <= midPoint)
        temp[i++] = arr[firstArrCnt++];

    while(secArrCnt <= endPoint)
        temp[i++] = arr[secArrCnt++];

    for(i = startPoint; i<=endPoint; i++)
        arr[i] = temp[i];

}

void sorting(int startPoint, int endPoint)
{
    int midPoint;

    if(startPoint >= endPoint)
        return;

    cout<<"Counter:"<<++counter<<" Start:"<<startPoint<<" End:"<<endPoint<<endl;

    midPoint = (startPoint+endPoint)/2;

    sorting(startPoint, midPoint);
    sorting(midPoint+1, endPoint);

    merging(startPoint, midPoint, endPoint);
}

int main()
{
    int i, n;

    cout<<"Enter number of elements:\n";
    cin>>n;
    cout<<"Enter "<<n <<"elements:\n";
    for(i=0; i<n; i++)
        cin>>arr[i];

    sorting(0, n-1);

    cout<<"\nAfter sorting the Array:\n";
    for(i = 0; i<n; i++)
        cout<<arr[i]<<" ";
    puts("");

    return 0;
}