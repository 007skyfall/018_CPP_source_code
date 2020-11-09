#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int num;
	char ch = 100;
	num = int(ch);

	char *name = (char *)(malloc(sizeof(char)*20));
	cout << "Hi,C++!你吃了吗！" << std::endl;
	std::cin >> num >> name;
	std::cout << num << std::endl << name << std::endl;

	std::cout << "我吃了" << "豆腐脑加油条" << std::endl;
	free(name);
	name = NULL;

	return 0;
}
