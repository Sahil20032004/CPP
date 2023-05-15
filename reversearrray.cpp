#include<iostream>
using namespace std;
int main(){
	int n;
	int *arr=new int[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s=0;
	int e=n-1;
	while(s<=e){
		int tem=arr[s];
		arr[s]=arr[e];
		arr[e]=tem;
		s++;
		e--;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}