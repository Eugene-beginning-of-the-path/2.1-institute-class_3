#include <iostream>

using namespace std;

class Cvector3
{
private:
	int x;
	int y;
	int z;
public:
	Cvector3(int _x, int _y, int _z);

	void ShowVector();

	int GetX() { return x; }
	int GetY() { return y; }
	int GetZ() { return z; }

	void SetX(int _x) { this->x = _x; }
	void SetY(int _y) { this->y = _y; }
	void SetZ(int _z) { this->z = _z; }

	~Cvector3();
};