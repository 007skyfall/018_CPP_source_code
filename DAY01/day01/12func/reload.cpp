#include <iostream>
using namespace std;

void drawImage(int x, int y, int r)
{
	cout << "drawImage(int,int,int)" << endl;
	cout << x << y << r << endl;
}
void drawImage(int x, int y, double r)
{
	cout << "drawImage(int,int,double)" << endl;
	cout << x << y << r << endl;
}
void drawImage(int x, int y, int w,int h)
{
	cout << "drawImage(int,int,int,int)" << endl;
	cout << x << y << w  << h << endl;
}

int main()
{
	drawImage(1,2,3);
	drawImage(1,2,3.14);
	drawImage(1,2,3,4);


	return 0;
}

