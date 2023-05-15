#include<iostream>
#include<cstring>
using namespace std;
bool compare(char str1[],char str2[]){
	if(strlen(str1)!=strlen(str2)){
		return false;
	}
	for(int i=0;i<strlen(str1);i++){
		if(strcmp(str1,str2)==0){ //using the inbuilt function of character array
			return true;
		}
		else{
			return false;
		}
	}
	return true;
}
int main(){
	char str1[100],str2[100];
	cin.getline(str1,100);
	cin.getline(str2,100);
	if(compare(str1,str2)==true){
		cout<<"EQUAL"<<endl;
	}
	else{
		cout<<"NOT";
	}
	
}