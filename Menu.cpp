#include <iostream>
#include "Cperson.h"
#include "Ctimer.h"
#include "Cvector.h"
#include "Cstring.h"

using namespace std;

///������ ������ Cperson/// 
Cperson::Cperson()
{
	name = "Kuznetsov";
	year = "10.10.2001";
}
void Cperson::input()
{
	string Name;
	cout << "Enter name: ";
	cin >> Name;
	this->SetName(Name);

	string Year;
	cout << "Enter year: ";
	cin >> Year;
	this->SetYear(Year);
}
Cperson::~Cperson()
{
	cout << "Destructor(Cperson-" << this << ") is working" << endl;
}

///������ ������ Ctimer/// 
Ctimer::Ctimer(int _min, int _sec)
{
	while (60 < _sec)
	{
		_sec -= 60;
		_min++;
	}

	this->min = _min;
	this->sec = _sec;
}
Ctimer::Ctimer(int _sec)
{
	this->min = 0;

	while (60 < _sec)
	{
		_sec -= 60;
		this->min++;
	}

	this->sec = _sec;
}
Ctimer::~Ctimer() { cout << "Destructor(Ctimer-" << this << ") is working" << endl; } 

///������ ������ Cvector3/// 
Cvector3::Cvector3(int _x, int _y, int _z)
{
	x = _x;
	y = _y;
	z = _z;
	ShowVector();
}
void Cvector3::ShowVector()
{
	cout << "Vector's coordinates: \nx= " << x << "; y=" << y << "; z= " << z << endl;
}
Cvector3::~Cvector3() { cout << "Destructor(Cvector3-" << this << ") is working" << endl; }


///������ ������ Cstring/// 
Cstring::Cstring(const char* line)
{
	this->size = strlen(line);
	this->string = new char[size + 1];
	for (int i = 0; i < size; i++)
		this->string[i] = line[i];
	this->string[size] = '\0';
}
Cstring::Cstring()
{
	this->string = nullptr;
	this->size = 0;
}
void Cstring::Show() 
{ 
	if (string != nullptr)
		cout << string << endl;
	else
		cout << "������ �����!" << endl;
}
Cstring::~Cstring()
{
	cout << "Destructor(Cstring-" << this << ") is working" << endl;
	delete[] this->string;
}


char Decision_3()
{
	char x;
	cout << "\n��������, ����� �� ������� �� ������ ������� � ������� ��������������� ������ ������: \n" << 
		"Ctimer - 't'; Cperson - 'p'; Cvector3 - 'v'; Cstring - 's'; \n" ;
	cout << "�� �����:";
	cin >> x;
	while (x != 't' && x != 'p' && x != 'v' && x != 's')
	{
		cout << "������� ���� �� ������������ ���������: ";
		cin >> x;
	}

	return x;
}

void menu()
{
	switch (Decision_3())
	{
		case 't':
		{
			int min, sec;
			cout << "������� ������: ";
			cin >> min;

			while (min < 0)
			{
				cout << "���������� ����� �� ����� ���� ������ ����, ������� �������� �����:  ";
				cin >> min;
			}

			cout << "������� �������: ";
			cin >> sec;

			while (sec < 0)
			{
				cout << "���������� ������ �� ����� ���� ������ ����, ������� �������� �����:  ";
				cin >> sec;
			}

			Ctimer timer1(min, sec);
			cout << "������: " << timer1.GetMin() << "\t �������: " << timer1.GetSec() << endl;

			cout << "������� �������: ";
			cin >> sec;

			while (sec < 0)
			{
				cout << "���������� ������ �� ����� ���� ������ ����, ������� �������� �����:  ";
				cin >> sec;
			}

			Ctimer timer2(sec);
			cout << "������: " << timer2.GetMin() << "\t �������: " << timer2.GetSec() << endl;
		}
		break;

		case 'p':
		{
			Cperson person;
			cout << "Name: " << person.GetName() << "\t Year: " << person.GetYear() << endl;
		}
		break;

		case 'v':
		{
			int x, y, z;
			cout << "x: ";
			cin >> x;

			cout << "y: ";
			cin >> y;

			cout << "z: ";
			cin >> z;
			Cvector3 vector(x, y, z);
		}
		break;

		case's':
		{
			char line[13] = "���-��� ���!";
			Cstring str(line);
			str.Show();

			Cstring str1;
			str1.Show();

		}
	}
}