#include <iostream>
using namespace std;

class A{
	public:
		A(void){
			cout << "我是构造函数" << endl;
		}
		~A(void){
			cout << "我是析构函数" << endl;
		}
};

int main()
{
	/*  // 栈区
	do{
		A a1;
	}while(0);
	while(1);
	*/
	A *a2 = new A;

	delete a2;
	while(1);
	a2 = NULL;



	return 0;
}
