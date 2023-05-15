//reversing a character array
#include<iostream>
using namespace std;
int length(char input[]){
	int count=0;
	for(int i=0;input[i]!='\0';i++){
		count++;
	}
	return count;
}
void reverse(char input[]){
	int s=0;
	int e=length(input)-1;
	while(s<e){
		int temp=input[s];
		input[s]=input[e];
		input[e]=temp;
		s++;
		e--;
	}
}
int main(){
	char name[100];
	cin.getline(name,100);
	reverse(name);
	cout<<name;
}