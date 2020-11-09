#include <iostream>
using namespace std;

enum COLOR {
	RED,
	GREEN,
	BLUE = 10,
};

int main()
{
	COLOR c;
	c = RED;
	cout << c << endl;

	cout << GREEN << endl;

	// c = 2; // 编译器会报错
	cout << BLUE << endl;

	return 0;
}
