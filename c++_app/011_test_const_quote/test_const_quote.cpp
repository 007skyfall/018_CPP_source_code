#include <iostream>
using namespace std;

//�����õ�֪ʶ�ܹ�
void test01()
{
	//��ͨ����

	int  a = 10;
	int &b = a;
	printf("a:%d \n", a);
	printf("b:%d \n", b);

	//������
	int  x = 20;
	const int &y = x;  //������ �� �ñ��� ����ֻ������ ����ͨ��yȥ�޸�x��
	printf("y:%d \n", y);
	//y = 21;

	//������ ��ʼ�� ��Ϊ2�����
	//1> �ñ��� ��ʼ�� ������
	{
		int x1 = 30;
		const int &y1 = x1; //��x1����ȥ��ʼ�� ������
		printf("y1:%d \n", y1);
	}
	//2> �������� ��ʼ�� ��������
	{
		const int a = 40;  //c++��������a���ڷ��ű���
		//int &m = 41; //��ͨ���� ����һ�������� ������������û���ڴ��ַ
		//���� ���Ǹ��ڴ�ȡ������ƺ� (�������)
		//printf("&40:%d \n", &40);
		const int &m = 43;  //c++������ �� �����ڴ�ռ� 
		printf("a:%d \n", a);
		printf("m:%d \n", m);
	}
	
	return ;
}


struct Teacher
{
	char name[64];
	int age ;
};


//void printTeacher(const Teacher  * const myt)
void printTeacher(const Teacher &myt)
{
	//������ �� ʵ�α��� ӵ��ֻ������ 
	//myt.age = 33;
	printf("myt.age:%d \n", myt.age);
	
}

int main(void)
{
	Teacher  t1;
	t1.age = 36;

	printTeacher(t1);
	cout<<"........................................."<<endl;
	test01();
	return 0;
}