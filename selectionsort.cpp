#include<iostream>
using namespace std;
void selectionsort(int *arr,int n){
	int small = INT_MAX;
	int j=0;
	while(j<=n-1){
		for(int i=j+1;i<n;i++){
			if(arr[i]<small){
				swap(arr[i],small);
			}
		}
		if(arr[j]>small){
			swap(arr[j],small);
		}
		j++;
	}
}
int main(){
	int n,*arr;
	cin>>n;
	arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}