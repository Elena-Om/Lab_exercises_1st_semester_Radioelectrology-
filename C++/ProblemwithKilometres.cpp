#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a[6][6]={{0,501,217,354,703,328}, 
	             {501,0,467,152,205,208},
				 {217,467,0,337,670,314},
				 {354,152,337,0,354,64},
			     {703,205,670,354,0,411},
			     {328,208,314,64,411,0}};
	
    int i=0,j=0,k=0,sum=0,number;
    float averagedistance=0;
    
    cout << "The cities are: 1.Athens 2.Thessaloniki 3.Patra 4.Larisa 5.Xanthi 6.Volos" << endl;
    cout << "The distance from the city: ";
    cin >> i;
    cout << " till the city: ";
    cin >> j;
    cout << " is " << a[i-1][j-1] << " km" << endl;
    
    cout << "Name one city 1-6: ";
    cin >> i;
    
    for (k=0;k<6;k++)
    {
    	sum = sum + a[i-1][k];
	}
	
	averagedistance = (float)sum/5;
    
    cout << "The average distance of this city to the others is: " << averagedistance << endl;
    
    for (i=0;i<6;i++)
    {
    	averagedistance=0;
    	sum=0;
    	
    	for (j=0;j<6;j++)
    	{
    		sum = sum + a[i][j];
		}
		averagedistance = (float)sum/5;
		cout << "Average distance of the city " << i+1 << " to the others is " << averagedistance << endl;
	}
	
	cout << "Give number: ";
	cin >> number;
    
    for (i=0;i<6;i++) 
    {
    	for (j=0;j<6;j++)
    	{
    		if (number < a[i][j])
    		{
    			cout << "The distance is greater than the number between the cities: " << i+1 << " and " << j+1 << endl;
			}
			
			else
			continue;
		}
	}
	
	return 0;
} 
