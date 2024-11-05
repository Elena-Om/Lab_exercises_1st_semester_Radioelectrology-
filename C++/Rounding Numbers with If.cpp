#include <iostream>
using namespace std;

int main()
{
	float x,y;
	float apotelesma;
	cout << "Give number between [0,10) with two decimal points: " ;
	cin >> x;
	
	if ((x>=0) && (x<10))
	{
		y = 10*x + 0.5;
		y = (int)y;
		apotelesma = y/10;
		cout << "The rounded number with one decimal point: " << apotelesma << endl;
	}
		
	else 
	cout << "Incorrect number entry";
	
	return 0;
}
