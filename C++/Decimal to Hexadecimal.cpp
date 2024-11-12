#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int hexadecimal[16] = {0};
	int i=0;
	int value;
	int digit=0;
	int mod;
	char characters[]={'A','B','C','D','E','F'};
	
	cout << "Give a decimal number: "; 
	cin >> value;
	
	while(value>0)
	{
		mod = value%16;
		value = (float)value/16;
		hexadecimal[digit]=mod;
		
		if (mod>=10)
		{
			cout << "digit: " << digit << "\t hexadecimal = " << characters[mod-10] << endl;
	    }
		
		else	
		{
			cout << "digit: " << digit << "\t hexadecimal = " << hexadecimal[digit] << endl;
	    }
			digit++;
			
	}
	
	for (i=digit-1;i>=0;i--)
	{
		if (hexadecimal[i]>=10)
		{
			cout << characters[hexadecimal[i]-10];
		}
		
		else
		cout << hexadecimal[i];
	}
	
	return 0;
}
