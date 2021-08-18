#include<string>

class Student{
	private:
	int age;
	
	public:
	string name;
	
	Student(){
		cout<<"Not parameterized Constructor is called"<<endl;
	}
	Student(int age){
		cout<<"One parameter constructor is called"<<endl;
		this->age = age;
	}
	Student(string name,int age){
		cout<<"two parameter constructor is called "<<endl;
		this->name = name;
		this->age = age;
	}
	void display(){
		cout<<"Name:"<<name<<"\t"<<"Age:"<<age<<endl;
	}
	void setage(int a,int password){
		if(password == 123 && age>0)
			age = a;
		else 
			cout<<"credential not satisfied"<<endl;
			return;
	}
};
