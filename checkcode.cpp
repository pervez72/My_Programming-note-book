// This program compiles
#include<iostream>
using namespace std;

void swap(int &x,int &y){
	int t=x;
	x=y;
	y=t;
	cout<<x<<" "<<y;
	
}

int main() 
{
	int a=10,b=20;
   	swap(a,b);
}