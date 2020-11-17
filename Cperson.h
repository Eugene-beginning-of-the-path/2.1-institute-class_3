#pragma once 
#include <iostream>

using namespace std;

class Cperson
{
private:
	string name;
	string year;

protected:
	void input();

public:
	Cperson();

	string GetName() { return name; }
	string GetYear() { return year; }

	void SetName(string Name) { this->name = Name; }
	void SetYear(string Year) { this->year = Year; }

	~Cperson();

};