#include<iostream>
using namespace std;
/*
void subs(string input,string output){
    if(input.length() == 0){
        cout<<output<<endl;
        return;
    }
    subs(input.substr(1),output);
    subs(input.substr(1),output+input[0]);
}

int main(){
    string input,output = "";
    cout<<"Enter the input string ..."<<endl;
    cin>>input;
    subs(input,output);
    return 0;
}*/

void printSubsetsOfArray(int input[],int n){
	if(n == 0){
		cout<<input;
		return;
	}
	printSubsetOfArray(input+1,
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}

