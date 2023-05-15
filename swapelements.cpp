#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the elements"<<endl;
	cin>>a>>b;
	int temp=a;
	a=b;
	b=temp;
	cout<<"a="<<a;
	cout<<"b="<<b;
}