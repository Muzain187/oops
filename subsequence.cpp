#include<iostream>
using namespace std;

int subsequence(string input,string output[]){
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int small = subsequence(smallString,output);
    cout<<"Small ="<<small<<endl;
    for(int i=0; i<small;i++){
        output[i+small] = input[0]+output[i];
    }
    return 2*small;
}

int main(){
    string input;
    cout<<"Enter The string which u have to find the subsequence ";
    cin>>input;
    string output[100];
    int count = subsequence(input,output);
    for(int i=0;i<count; i++){
        cout<<output[i]<<endl;
    }
    // string mapp[] = {"","","abc"};
    // cout<<mapp[2]<<endl;
    // string temp = mapp[2];
    // cout<<temp[0];
}