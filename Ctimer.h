#include <iostream>

using namespace std;

class Ctimer
{
private:
	int min;
	int sec;

public:
	Ctimer(int _min, int _sec);

	Ctimer(int _sec);

	int GetMin() { return min; }
	int GetSec() { return sec; }

	void SetMin(int _min) { this->min = _min; }
	void SetSec(int _sec) { this->sec = _sec; }

	~Ctimer();

};