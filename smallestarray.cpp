#include<iostream>
using namespace std;
int main(){
	int n;
	int *arr=new int[n];
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	int smallest=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
	cout<<"The smallest element in the array is"<<smallest;
}