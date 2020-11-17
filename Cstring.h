#include <iostream>

using namespace std;

class Cstring
{
private:
	char* string;
	int size;

public:
	Cstring(char const* line);

	Cstring();

	void Show();

	~Cstring();
};