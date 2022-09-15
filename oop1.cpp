#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string number;
    string firstName;
    string middleName;
    string lastName;
    int age;
    string gender;
    string address;
    int ID;
public:
    static int pID;
    Person();
    Person(string , string , string , string , int , string , string , int);

    void setNumber(string );
    void setFirstName(string );
    void setMiddleName(string );
    void setLastName(string );
    void setAge(int);
    void setGender(string );
    void setAddress(string );
    void setID(int);

    string getNumber();
    string getFirstName();
    string getMiddleName();
    string getLastName();
    int   getAge();
    string getGender();
    string getAddress();
    int   getID();

    void showInfo();
    string fullName();
};

int Person::pID = 100;

Person::Person() {
    this -> number = "";
    this -> firstName = "";
    this -> middleName = "";
    this -> lastName = "";
    this -> age = 0;
    this -> gender = "";
    this -> address = "";
    this -> ID = 0;
}

Person::Person(string number , string first  , string middle , string last , int age , string sex , string addr, int id = 0) {
    setNumber(number);
    setFirstName(first);
    setMiddleName(middle);
    setLastName(last);
    setAge(age);
    setGender(sex);
    setAddress(addr);
    setID(id);
}

void Person::setNumber(string number) {
    this -> number = number;
}

void Person::setFirstName(string first) {
    this -> firstName = first;
}

void Person::setMiddleName(string middle) {
    this -> middleName = middle;
}

void Person::setLastName(string last) {
    this -> lastName = last;
}

void Person::setAge(int age) {
    this -> age = (age >= 0) ? age : 0;
}

void Person::setGender(string sex) {
    this -> gender = sex;
}

void Person::setAddress(string addr) {
    this -> address = addr;
}

void Person::setID(int id) {
    this -> ID = (id >= 100) ? id : Person::pID++;
}

string Person::getNumber() {
    return this -> number;
}

string Person::getFirstName() {
    return this -> firstName;
}

string Person::getMiddleName() {
    return this -> middleName;
}

string Person::getLastName() {
    return this -> lastName;
}

int Person::getAge() {
    return this -> age;
}

string Person::getGender() {
    return this -> gender;
}

string Person::getAddress() {
    return this -> address;
}

int Person::getID() {
    return this -> ID;
}

string Person::fullName() {
    return getLastName() + " " + getMiddleName() + " " + getFirstName();
}


void Person::showInfo() {
	cout << "============== Person Info ===========" << endl;
	cout << "First Name: " << getFirstName() << endl;
    cout << "Middle Name: " << getMiddleName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Full Name: " << fullName() << endl;
	cout << "Address: " << getAddress() << endl;
	cout << "Id: " << getID() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Gender: " << getGender() << endl;
    cout << "Number: " << getNumber() << endl;
	cout << "=======================================" << endl;
}

void getPersonInfo(Person* ps , int n) {
    int age;
    string first, middle , last , addr, sex , number;
    for (int i = 0 ; i < n ; i++) {
        cout << "=======================================" << endl;
        cout << "First name: ";
        cin >> first;
        cout << "Last name: ";
        cin >> last;
        cout << "Middle name: ";
        cin.ignore();
        getline(cin , middle);
        cout << "Address: ";
        getline(cin , addr);
        cout << "Gender: ";
        cin >> sex;
        cout << "Phone number: ";
        cin >> number;
        cout << "Age: ";
        cin >> age;

        Person p(number , first , middle , last , age , sex , addr , 0);
        ps[i] = p;
    }
}

void showInfo(Person* ps, int n) {
    for (int i = 0 ; i < n ; i++) {
        ps[i].showInfo();
    }
}

int main() {
    Person* people;
    int N;
    cout << "Enter number of people: ";
    cin >> N;
    people = new Person[N];

    getPersonInfo(people , N);

    showInfo(people , N);
    return 0;
}



