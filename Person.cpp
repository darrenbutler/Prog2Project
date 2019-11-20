#include "Person.h"

Person::Person() {
	this->firstName = "";
	this->lastName = "";
	this->address = "";
	this->dob = dob(0,0,0);
	this->gender = 'x';
	this->phone = "xxx-xxx-xxxx";
	this->ssn = 0;
}
Person::Person(string firstName, string lastName, string address, Date dob,
	char gender, string phone, int ssn){
	this->firstName = firstName;
	this->lastName = lastName;
	this->address = address;
	this->dob = dob;
	this->gender = gender;
	this->phone = phone;
	this->ssn = ssn;
}

Person::Person(Person& const toCopy){
	this->firstName = toCopy.firstName;
	this->lastName = toCopy.lastName;
	this->address = toCopy.address;
	this->dob = toCopy.dob;
	this->gender = toCopy.gender;
	this->phone = toCopy.phone;
	this->ssn = toCopy.ssn;
}
Person::~Person(){}

string Person::get_name() { return firstName + lastName; }
string Person::getLastName() { return lastName; }
string Person::get_address() { return address; }
Date Person::get_dob() { return dob; }
string Person::get_phone() { return phone; }
int Person::get_ssn() { return ssn; }
char Person::get_gender() { return gender; }
