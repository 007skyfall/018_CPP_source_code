#include <iostream>
using namespace std;

int main(void)
{
	// 分配空间
	int *pi = new int[10];
	// 符初始值
	for (int i = 0;i < 10;i++)
	{
		pi[i] = i;
	}
	for(int i = 0;i < 10;i++)
	{
		cout << pi[i] << ' ';
	}
	cout << endl;
	delete[] pi; // 释放
	pi = NULL;


	return 0;
}
