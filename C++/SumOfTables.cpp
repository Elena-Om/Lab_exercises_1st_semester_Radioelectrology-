#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a[3][2]={{1,2},
				 {3,4},
				 {5,6}};
    
    int b[3][2]={{10,20},
	             {30,40},
	             {50,60}};
	
	int c[3][2]={0};
	
	int i=0,j=0;
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout << "The sum of the tables a and b for the element (" << i+1 << "," << j+1 << ") is " << c[i][j] << endl;
		}
	}
	return 0;
}
