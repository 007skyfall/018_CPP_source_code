#include <iostream>
using namespace std;

int num = 300;

namespace ns1{
	int num = 100;
	void print()
	{
		int num = 200;
		cout << num << endl;
		cout << ns1::num << endl;
		cout << ::num << endl;
	}
	namespace ns2{
		int num = 400;
	}
}


int main()
{
	cout << ns1::num << endl;
	ns1::print();
	
	using ns1::num;
	cout << ns1::num << endl;
	//print();  // 报错
	
	using namespace ns1;
	print();

	cout << ns1::ns2::num << endl;


	return 0;
}
