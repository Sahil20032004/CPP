#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int *arr=new int[n];
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
	  cin>>arr[i];
	}	
	int largest=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"The largest element in the array is"<<largest;
}