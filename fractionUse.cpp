#include<iostream>
#include "fraction.cpp"
using namespace std;

int main(){
	Fraction f1(10,2);
	Fraction f2(15,4);
	Fraction f3 = f1+f2;
	f3.print();
	Fraction f4 = f1*f2;
	cout<<"\nf4 = f1*f2 =";
	f4.print();
	
	cout<<"Before fraction "<<endl;
	f1.print();
	f2.print();
	
	cout<<"After fraction 😑️"<<endl;
	f1.add(f2);
	f1.print();
	f2.print();
	
	Fraction f5(10,2);
	f5.print();
	++(++f5);
	f5.print();
	
	cout<<" f6++ "<<endl;
	Fraction f6(10,2);
	f6.print();
	Fraction f7 = f6++;
	f6.print();
	f7.print();
	
	return 0;
}
