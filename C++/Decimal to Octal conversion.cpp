#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	int octal[3] = {0};
	int i=0;
	int value;
	int digit=0;
	
	cout << "Give a decimal number (until 511): ";
	cin >> value;
	
	while(1)
	{
		if (value>=1)
		{
			octal[digit] = value%8;
			value = (float)value/8;
			cout << "digit: " << digit << "\t octal= " << octal[digit] << endl;
			digit++;

			
			if (value==0)
		      break; 	
		}
		
	}
	
	digit--;
	
	for (i=0;i<=digit;i++)
	{
		cout << octal[digit-i];
	}
		
	return 0;
}
