#include <iostream>
#include <string>
using namespace std;

class person {
private:
	int age;
	string name;
public:
	person(int a,string n) {
		age = a;
		name = n;

	}
	void print() {
		cout << "your name is:" << name << endl;
		cout << "your age is:" << age << endl;
	}
};

class employee :public person {
private:
	int id, salary;
public:
	employee(int a, string n,int i,int sal):person(a,n) {
		id = i;
		salary = sal;
	}
	void print() {

		cout << "your id is:" << id << endl;
		cout << "your salary is:" << salary << endl;
	}
};

class student:public employee {
private:
	string email;
public:
	student(int a, string n, int i, int sal,string em) :employee(a,n,i,sal) {
		email = em;
	
	}
	void print() {
		person::print();
		employee::print();
		cout << "your email is:" << email << endl;


	}

};


int main() {
	student ob1(19,"nour",692500428,20000,"nour@email");
	ob1.print();

}
