#include<iostream>
#include<string>
using namespace std;
#include "student.cpp"

int main(){

	Student s1;
	Student *s2 = new Student();
	//cout<<"Enter Name and Age for First Student :";
	//cin>>s1.name>>s1.age;
	/*cout<<"Enter Name and Age for second Student :";
	cin >> (*s2).name >> s2->age;
	
	cout<<"The Details of Students :"<<endl;
	cout<<"Name\tage"<<endl;
	cout<<s1.name<<"\t"<<s1.age<<endl;
	cout<<s2->name<<"\t"<<s2->age<<endl;*/
	
	/*s1.name = "Mohammad Ashraf";
	s1.setage(25,123);
	s1.display();
	s1.setage(25,12);
	s1.display();*/
	
	int age;
	string name;
	cout<<"\nEnter the name of the student :";
	getline(cin,name);
	cout<<"\nEnter the Age of the Student :";
	cin>>age;
	
	Student s3(age);
	s3.display();
	
	Student s4(name,age);
	s4.display();
	
}
