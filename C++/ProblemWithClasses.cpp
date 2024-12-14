#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle {
	private:
		double radius;
		double area;
	public:
		double set_aktina ()
		{
			cout << "Give the radius of the circle: ";
	        cin >> radius;
			return radius;
		}
		
		double give_embado ()
		{
			area = PI*radius*radius;
			return area;
		}
};

int main()
{
	Circle circ1;
	double radius1,area;
	
	radius1 = circ1.set_aktina();
	area = circ1.give_embado();
	cout << "The area of the circle is: " << area << endl;
	
	return 0;
}
