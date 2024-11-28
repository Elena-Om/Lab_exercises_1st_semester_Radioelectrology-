#include <iostream>
#include <cmath>
using namespace std;


int function1 (int x);
int function2 (int x);
int function3 (int x);
int multiply (int x,int y);
float division (int x,int y);
float sum (float x,float y);

int main()
{
	int i,sun1,sun2,sun3,ginomeno=0;
	float piliko=0,athroisma=0;
	
	for (i=6;i>0;i++)
	{
		sun1 = function1(i);
		sun2 = function2(i);
		sun3 = function3(i);
		ginomeno = multiply(sun1,sun2);
		piliko = division(ginomeno,sun3);
		athroisma = sum(athroisma,piliko);
		    
		if (athroisma>500)
          break;
			  		
		cout << "To sum einai: " << athroisma << endl;
	}
	return 0;
}


int function1 (int x)
{
	x-=1;
	return x;
}

int function2 (int x)
{
	x+=3;
	return x;
}

int function3 (int x)
{
	x-=5;
	return x;
}

int multiply (int x,int y)
{
	int z=0;
	z=x*y;
	return z;
}

float division (int x,int y)
{
	float z;
	z=(float)x/y;
	return z;
}

float sum (float x,float y)
{
	float sum;
	sum = x+y;
	return sum;
}
