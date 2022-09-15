#include <iostream>
#include <cstring>
using namespace std;

/*
struct Cat {
    char name [100];
    int age;
    float weight;
    char color[100];
    char eyescolor[100];
};

struct Student {
    char ID[20];
    char name[100];
    int age;
    float mark;
    char address[100];
    Cat pet;
};

void getInfo(Student &s) {
    cout << "Enter name: ";
    cin.getline(s.name, 99);
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter address: ";
    cin.ignore();
    cin.getline(s.address, 99);
    cout << "Enter mark: ";
    cin >> s.mark;
}

void showInfo(Student s) {
    cout << "========== Student Info ==========\n";
    cout << "Name: " << s.name << endl; 
    cout << "Address: " << s.address << endl;
    cout << "Age: " << s.age << endl;
    cout << "Mark: " << s.mark << endl;
    cout << "==================================\n";
}

int main() {
    Student s;
    getInfo(s);
    showInfo(s);
    return 0;
}
*/

class Student {
private:
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];

public:
	Student();
	Student(char*);
	Student(char*, int);
	Student(char*, int, char*, char*, float);
	void showInfo();

	void setID(char*);
	void setName(char*);
	void setAddress(char*);
	void setAge(int);
	void setMark(float);

	int getAge();
	float getMark();
	char* getName();
	char* getAddress();
	char* getID();
};

Student::Student() {
	cout << "Call non para constructor" << endl;
	this->name[0] = '\0';
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = 0;
	this->mark = 0;
}

Student::Student(char* name) {
	cout << "Call 1 para constructor" << endl;
	strcpy_s(this->name, 99, name);
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = 0;
	this->mark = 0;
}

Student::Student(char* name, int age) {
	cout << "Call 2 params constructor" << endl;
	strcpy_s(this->name, 99, name);
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = age;
	this->mark = 0;
}

Student::Student(char* name, int age, char* id, char* address, float mark) {
	cout << "Call 5 params constructor" << endl;
	strcpy_s(this->name, 99, name);
	strcpy_s(this->ID, 19, id);
	strcpy_s(this->address, 99, address);
	this->age = age;
	this->mark = mark;
}

void Student::setID(char* id) {
	strcpy_s(this->ID, 19, id);
}

void Student::setName(char* name) {
	strcpy_s(this->name, 99, name);
}

void Student::setAddress(char* addr) {
	strcpy_s(this->address, 99, addr);
}

void Student::setAge(int age) {
	this->age = age;
}
void Student::setMark(float mark) {
	this->mark = mark;
}

int Student::getAge() {
	return this->age;
}

float Student::getMark() {
	return this->mark;
}

char* Student::getName() {
	return this->name;
}
char* Student::getAddress() {
	return this->address;
}

char* Student::getID() {
	return this->ID;
}

void Student::showInfo() {
	cout << "============== Student Info ===========" << endl;
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Id: " << ID << endl;
	cout << "Age: " << age << endl;
	cout << "Mark: " << mark << endl;
	cout << "=======================================" << endl;
}



int main() {
	char* name = new char[100];
	strcpy_s(name, 99, "Tran Van Hung");
	char* id = new char[20];
	strcpy_s(id, 19, "B21DCCN123");
	char* addr = new char[100];
	strcpy_s(addr, 99, "Hanoi");

	Student s, s1, s2, s3, s4; // goi ham tao 0 tham so

	s1.setAge(20);
	s1.setName(name);
	s1.setAddress(addr);
	s1.setMark(7.5);
	s1.setID(id);

	s1.showInfo();
	s.showInfo();

	return 0;
}