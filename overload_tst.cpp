#include "Precompiled.h"

using namespace std;

class Complex
{
	public:
		Complex(double r = 0, double i = 0):real(r), image(i){}
		void dumpFormat()
		{
			cout<<"("<<this->real<<","<<this->image<<")"<<endl;
		}
		Complex& operator=(const Complex& another)
		{
			this->real = another.real;
			this->image = another.image;
			return *this;
		}
		Complex operator+(const Complex& another)
		{
			Complex c;
			c.real = this->real +  another.real;
			c.image = this->image +  another.image;
			return c;
		}
	private:
		double real;
		double image;
};


int main()
{

	Complex a(1, 2), b(4, 5);

	Complex s = a + b;

	s.dumpFormat();
	return 0;

}
