#include <iostream>
using namespace std;

int main()
{
	float x,z;
	int y;
	float apotelesma;
	
	cout << "Give number between [0,10) with two decimal points: " ;
	cin >> x;
    y = 100*x;
	
	switch (y)
	{
	case 0 ... 999:
		z = 10*x + 0.5;
		z = (int)z;
		apotelesma = z/10;
		cout << "The rounded number with one decimal point: " << apotelesma << endl;
		break;
		
	default:
		cout << "Incorrect number entry";
		break;
   }
	
	return 0;
}
