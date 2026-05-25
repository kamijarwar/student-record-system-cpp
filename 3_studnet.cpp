#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		int id;
		string department;
		Student(string name, int id, string department){
			this->name=name;
			this->id=id;
			this->department=department;
			
		}
		
		void display(){
			cout<<"--------------------------Student-----------------------"<<endl;
			cout<<"Name: "<<name<<endl;
		cout<<"Id No: "<<id<<endl;
		cout<<"Department: "<<department<<endl;
		cout<<endl;
		}
};

int main(){
	
	Student s1("kamran jarwar",54,"IT");
	Student s2("Zahher Maheesser",58,"computer science");
	Student s3("AQSA",26,"IR");
	s1.display();
	s2.display();
	s3.display();
	
	
	
	return 0;
}
