// Paradeigma 4

#include <iostream>
using namespace std;

class Circle {
	public:
		double aktina;
		Circle();
		~Circle();
		
		void set_aktina (double x)
		{
			aktina=x;
		}
		
		double give_embado ()
		{
			return 3.14*aktina*aktina;
		}
};

Circle::Circle()
{
	aktina=1;
}

Circle::~Circle()
{
}

int main()
{
	Circle d[4];
	double a;
	int i;
	
	for(i=0;i<4;i++)
	{
		cout << "Dwse thn timi tis aktinas: " << endl;
		cin >> a;
		d[i].set_aktina(a);
	}
	
	for(i=0;i<4;i++)
	{
		cout << "To emvadon einai: " << d[i].give_embado() << endl;
	}
	
	return 0;
}

