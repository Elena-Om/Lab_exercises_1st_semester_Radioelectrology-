#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i=0;
	char digit;
	int value=0;
	int arr[4]={0};
	
	for (i=3;i>=0;i--)
	{
		cout << "Give digit in hexadecimal form for the element: " << i << "\t";
		cin >> digit;
		
		
		if (digit>='A' && digit<='F')
		{
			arr[i]=digit-'A'+10;
	    }
		
		else
		{
			arr[i]=digit-'0';
		}
	}
	
	for(i=0;i<4;i++)
	{
		value = value + arr[i]*pow((double)16,(double)i);
	}
	
	cout << "Result as a decimal number: " << value << endl;
	
	return 0;
}
