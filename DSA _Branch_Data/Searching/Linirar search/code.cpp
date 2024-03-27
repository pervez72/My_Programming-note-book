#include<bits/stdc++.h>
using namespace std;

int liniar_search(int a[],int n,int data){
    int i=n;
    while (i>0)
    {
        if (a[i]==data)
        {
            return data;
            break;
        }
        i--;
        
    }
    return -1;
    
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Search value:"<<"\n";
    int x;
    cin>>x;

    int found=liniar_search(a,n,x);
    if(found==-1)cout<<"Not Found"<<"\n";
    else cout<<"vlaue Founded"<<"\n";






}