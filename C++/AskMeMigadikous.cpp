/* Athroisma 2 migadikwn arithmwn */

#include <iostream>
using namespace std;

class Migas {
	public: 
	   double x;
	   double y;
	   
	   Migas(double a=1,double b=1);
	   ~Migas();
	   
	   Migas operator+(Migas M2);
};

Migas::Migas(double a,double b)
{
	x=a;
	y=b;
}
Migas::~Migas(){}

Migas Migas::operator+(Migas M2)
{
	Migas migadikos;
	migadikos.x= this->x + M2.x; 
	migadikos.y= this->y + M2.y;
	return migadikos;
}

int main()
{
	Migas M1(1,2);
	Migas M2(3,4);
	Migas M3;
	
	M3 = M1+M2;
	
	cout << "To athroisma twn migadikwn einai: " << M3.x << "+i" << M3.y << endl;
	
	return 0;
}
