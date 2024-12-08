#include <iostream>
#include <cmath>
using namespace std;

struct complexNum {
	float re;
	float im;
};

void complement (complexNum *table);
void operation (float *x, float *y, float *sum, float *diff);

int main()
{
	complexNum tableofnum[2];
	float sumre=0, diffre=0;
	float sumim=0,diffim=0;
	int i=0;
	
	complement(tableofnum);
	
	operation(&tableofnum[i].re,&tableofnum[i+1].re,&sumre,&diffre);
	operation(&tableofnum[i].im,&tableofnum[i+1].im,&sumim,&diffim);
	
	if (sumim>0)
	cout << "The sum of the two complex numbers is: " << sumre << " + " << sumim << "i" << endl;
	
	else if(sumim<0)
    cout << "The sum of the two complex numbers is: " << sumre << sumim << "i" << endl;
    
    if (diffim>0)
	cout << "The difference of the two complex numbers is: " << diffre << " + " << diffim << "i" << endl;
    
    else if(diffim<0)
    cout << "The difference of the two complex numbers is: " << diffre << diffim << "i" << endl;
    
	return 0;
}

void complement (complexNum *table)
{
	int i;
	
	for (i=0;i<2;i++)
	{
		cout << "Give the real part of the " << (i+1) << " number: ";
	    cin >> table[i].re;
	    cout << "Give the imaginary part of the " << (i+1) << " number: "; 
	    cin >> table[i].im;
	}
}

void operation (float *x, float *y, float *sum, float *diff)
{
	*sum = (*x)+(*y);
    *diff = (*x)-(*y);
}
