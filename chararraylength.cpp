//in this program we will find the length of the char array
#include<iostream>
using namespace std;
int length(char input[]){
	int count=0;
	for(int i=0;input[i]!='\0';i++){
		count++;
	}
	return count;
}
int main(){
	char name[100];
	cin>>name;
	cout<<"Length of the name is :"<<length(name);
}//always remember that the last element of the given array is null '\o'