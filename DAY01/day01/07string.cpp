#include <iostream>
using namespace std;

int main()
{
	string str = "Hi,C++";
	string str1;
	str1 = "Hi";
	cout << str << endl;
	cout << str1 << endl;

	string str2;
	str2 = str;
	cout << str2 << endl;

	str2 = str1 + ",hello!" + str;
	cout << str2 << endl;

	cout << (str2 == str1) << endl;
	
	cout << str2.size() << endl;
	str2[0] = 'h';
	cout << str2[0] << endl;
	return 0;
}



