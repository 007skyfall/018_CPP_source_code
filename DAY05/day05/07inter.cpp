#include <iostream>
using namespace std;

class Phone{
	public:
		Phone(const string& number):m_number(number){}
		void call(const string& number){
			cout << m_number << "打电话给" << 
				number << endl;
		}

	private:
		string m_number;
};

class Player{
	public:
		Player(const string& music_name):m_name(music_name){}
		void play(const string& player_brand){
			cout << player_brand << "播放器，播放" << 
				m_name << endl;
		}
	private:
		string m_name;
};

class Computer{
	public:
		Computer(const string& tv_name){
			this->tv_name = tv_name;
		}
		void display(const string& brand){
			cout << "使用" << brand << "电脑看" <<
				tv_name << endl;
		}

	private:
		string tv_name;
};

class Smartphone:public Phone,public Player,public Computer{
	public:	
	Smartphone(const string& smart_name,  \
					const string& number,  \
					const string& music_name,  \
					const string& tv_name  \
				):Phone(number),Player(music_name),  \
					Computer(tv_name),m_smart(smart_name){}

	private:
		string m_smart;
};




int main()
{
	Smartphone smart("华为","18211035799",
			"最炫民族风","少年派");

	smart.call("10086");
	smart.play("华为");
	smart.display("华为");
	
	Phone * p1 = &smart;  // 向上造型
	p1->call("10010");
	
	Player *p2 = &smart;
	
	Computer *p3 = &smart;

	cout << "&smart=" << &smart << endl;
	cout << "p1=" << p1 << endl;
	cout << "p2=" << p2 << endl;
	cout << "p3=" << p3 << endl;




	return 0;
}
