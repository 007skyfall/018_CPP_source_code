#include <iostream>
using namespace std;

class Shape{
	public:
		Shape(int x, int y):m_x(x),m_y(y){}
		
		void show(void){
			cout << "图形坐标：" << m_x << 
				',' << m_y  << endl;
		}

	protected:
		int m_x;
		int m_y;
};

class Rect:public Shape{
	public:
		Rect(int x, int y, int w, int h):
			Shape(x,y),m_w(w),m_h(h){}
		virtual void show(void){
			cout << "图形坐标：" << m_x << ',' <<
				m_y << ",长和宽:" << m_w << ',' <<
				m_h << endl;
		}
	private:
		int m_w;
		int m_h;
};

class Circle:public Shape{
	public:
		Circle(int x,int y, int r):
			Shape(x,y),m_r(r){}
		virtual void show(void){
			cout << "图形坐标：" << m_x << ',' <<
				m_y << ",圆的半径:" << m_r << endl;

		}
	private:
		int m_r;
};



int main()
{
	Shape *image1 = new Circle(1,2,3);
	image1->show();

	Shape *image2 = new Rect(5,6,7,8);
	image2->show();
	return 0;
}
