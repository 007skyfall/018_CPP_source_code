#include <iostream>
using namespace std;

int main(void)
{
	int *pa = new int(100);
	cout << "*pa = " << *pa << endl;
	delete pa;
	pa = NULL;


	// 分配空间
	int *pi = new int[10]{1,2,3,4,5,6,7,8,9,10};
	for(int i = 0;i < 10;i++)
	{
		cout << pi[i] << ' ';
	}
	cout << endl;
	delete[] pi; // 释放
	pi = NULL;


	return 0;
}
