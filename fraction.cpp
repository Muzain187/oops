//#include<iostream>
using namespace std;

class Fraction{
	private:
	int numerator,denominator;
	
	public:
	Fraction(int numerator,int denominator){
		this->numerator = numerator;
		this->denominator = denominator;
	}
	int min(int num1,int num2){
		if(num1 < num2)
			return num1;
		else
			return num2;
	}
	void print(){
		std::cout << this->numerator << " / " << this->denominator << std::endl;
	}
	
	void simplify(){
		int gcd = 1;
		int minimum = min(this->numerator,this->denominator);
		for(int i=1; i<=minimum; i++){
			if(this->numerator%i == 0 && this->denominator%i == 0)
				gcd = i;
		}
		this->numerator = this->numerator/gcd;
		this->denominator = this->denominator/gcd;
		
	}
	Fraction operator+(Fraction const &f2){
		int n = (f2.denominator*this->numerator) + (this->denominator*f2.numerator);
		int d = this->denominator * f2.denominator;
		Fraction fnew(n,d);
		fnew.simplify();
		return fnew;
	}
	Fraction operator*(Fraction const &f2){
		int n = numerator * f2.numerator;
		int d = denominator * f2.denominator;
		Fraction fnew(n,d);
		return fnew;
	}
	
	void add(Fraction f2){
	this->numerator = (f2.denominator*this->numerator) + (this->denominator*f2.numerator);
	this->denominator = this->denominator * f2.denominator;
	
	simplify(); 	
	}
	
	Fraction& operator++(){
		numerator = numerator+denominator;
		simplify();
		return *this;	
	}
	Fraction operator++(int){
		Fraction fnew(numerator,denominator);
		numerator = numerator + denominator;
		simplify();
		return fnew;
	}



};
