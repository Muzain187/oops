#include<iostream>
#include "staticClass.cpp"

using namespace std;

int main(){
	Student Ashraf(41,20),Muzain(40,19);
	Ashraf.display();
	Muzain.display();
	cout<<Student :: totalStudent;
}
