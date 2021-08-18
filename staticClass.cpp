using namespace std;

class Student{
	public:
	int sid;
	int age;
	static int totalStudent;
	
	Student (int sid,int age){
		this->sid = sid;
		this->age = age;
		totalStudent++;
	}
	void display(){
		cout<<"sid :"<<sid<<" age: "<<age<<" "<<this<<endl;
	}
};
int Student :: totalStudent = 0;
