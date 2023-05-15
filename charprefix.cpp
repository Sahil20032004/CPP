//printing all the prefix in the character array.
#include<iostream>
#include<cstring>
using namespace std;
void prefix(char input[]){
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
	prefix(input);//calling out the function.
}