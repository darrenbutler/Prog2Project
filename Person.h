#pragma once
#include<string>
#include"Date.h"

using namespace std;

class Person
{
public:
	Person();
	Person(string firstName, string lastName, string address, Date dob,
		char gender, string phone, string ssn);
	Person(Person& const);
	~Person();

	string get_name();
	string getLastName();
	string get_address();
	Date get_dob();
	string get_phone();
	int get_ssn();
	char get_gender();

private:
	
	string firstName;
	string lastName;	
	char gender;
	int ssn;
	string phone;
	Date dob;
	string address;

	
};
