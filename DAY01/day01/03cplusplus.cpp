#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int num;
	char *name = (char *)malloc(sizeof(char)*20);
	cout << "Hi,C++!你吃了吗！" << std::endl;
	printf("%p\n",name);
	std::cin >> num >> name;
	std::cout << num << std::endl << name << std::endl;

	std::cout << "我吃了" << "豆腐脑加油条" << std::endl;
	free(name);
	name = NULL;

	return 0;
}
