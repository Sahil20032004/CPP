//printing the prefix of the character array so for that we will first reverse he character array by the defined reverse function and then we will just print the sufix
#include<iostream>
#include<cstring>
using namespace std;
void reverse(char input[]){
	int s=0;
	int e=strlen(input)-1;
    while(s<e){
    	int temp=input[s];
    	input[s]=input[e];
    	input[e]=temp;
    	s++;
    	e--;
	}
}
void suffix(char input[]){
	reverse(input);
	for(int e=0;e<strlen(input);e++){
		for(int s=0;s<=e;s++){
			cout<<input[s];
		}
		cout<<endl;
	}
}
int main(){
	char input[100];
	cin.getline(input,100);
	suffix(input);
}