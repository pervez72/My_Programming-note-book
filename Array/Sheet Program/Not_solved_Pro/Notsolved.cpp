#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    bool flag;
    cin>>a>>b;
    if((a>=1 && a<=10)|| (b>=1 && b<=10)){
    int s=a+b+1;
    int position=a+1;
    char ch[s];
    for (int i=0; i<s; i++)
    {
        cin>>ch[i];
    }
   if (ch[0]>'0' && ch[s-1]<'9')
   {
    for (int i = 0; i <s; i++)
    {
        if(i==position-1)
        {
            if (ch[i]=='-')
            { 
                 flag=true;
                 break;
            }
        }
    }
   }
   
    if(flag==true)cout<<"Yes";
    else
        cout<<"No";
    }
}
