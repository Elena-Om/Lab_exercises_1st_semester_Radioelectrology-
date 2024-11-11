#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int arr[3]={0};
	int i,value=0;
	
	for (i=2;i>=0;i--)
	{
		cout << "Give a digit in the octal system for the element " << 2-i << "\t";
		cin >> arr[2-i];
		value = value + arr[2-i]*pow((double)8,(double)i);
	}
	
	cout << "Number in the octal system: ";
	for (i=2;i>=0;i--)
	{
		cout << arr[2-i];
	}
	cout << endl;
	cout << "Result as a decimal number: " << value;
	
	return 0;
}
