#include <iostream>
using namespace std;

int main(void)
{
	// 分配空间
	int *pi = new int;
	*pi = 10; // 符初始值
	cout << "*pi = " << *pi << endl;
	delete pi; // 释放
	//*pi = 20;  // 编译不会报错，出现野指针，非常危险
	pi = NULL;

	int *pi2 = new int;
	cout << "pi = " << pi << endl;
	cout << "pi2 = " << pi2 << endl;
	*pi2 = 20;	
	cout << "*pi2 = " << *pi2 << endl;
	return 0;
}
