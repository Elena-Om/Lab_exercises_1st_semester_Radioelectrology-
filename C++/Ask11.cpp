//Paradeigma 11

#include <iostream>
using namespace std;

class Circle {
	public:
		double aktina;
		
		Circle (double x=1) : aktina(x) {}
        
        double give_aktina ()
        {
        	return aktina;
		}
		
		Circle operator++();
		Circle operator++(int);
		
};

Circle Circle::operator++()
{
	Circle circle;
	circle.aktina=++this->aktina;
	return circle;
}

Circle Circle::operator++(int)
{
	Circle circle2;
	circle2.aktina=this->aktina++;
	return circle2;
}

int main()
{
	Circle C1(10),C2(10),C3(0);
	
	C3=++C1;
	
	cout << "H aktina tou 1ou kykloy einai : " << C1.give_aktina() << endl;
	cout << "H aktina tou 3ou kykloy einai : " << C3.give_aktina() << endl;
	
	C3=C2++;
	
	cout << "H aktina tou 2ou kykloy einai : " << C2.aktina << endl;
	cout << "H aktina tou 3ou kykloy einai : " << C3.aktina << endl;
	
	return 0;
}
