// Paradeigma 6

#include <iostream>
using namespace std;

class Multifaceted {
	public:
		int pleures;
		double *mikos;
		
		Multifaceted();
		~Multifaceted();
		
		void set_pleura (int x)
		{
			pleures=x;
			mikos=new double[pleures];
		}
		
		void set_mikos(int a,double b)
		{
			*(mikos+a)=b;
		}
		
		double perimetros()
		{
			int i=0;
			double perimetros=0;
			
			for(i=0;i<pleures;i++)
			{
				perimetros=perimetros+*(mikos+i);
			}
			return perimetros;
		}
};

Multifaceted::Multifaceted()
{
	//cout << "DIMIOURGIA POLIPLEUROU" << endl; 
	pleures=0;
	mikos=NULL;
}

Multifaceted::~Multifaceted()
{
	//cout << "KATASTROFI POLIPLEUROU" << endl;
	delete [] mikos;
}

int main()
{
	Multifaceted sxima;
	int plithos,i=0;
	double mhkos;
	
	cout << "Dwse arithmo pleurwn: " << endl;
	cin >> plithos;
	sxima.set_pleura(plithos);
	
	for(i=0;i<plithos;i++)
	{
		cout << "Dwse to mikos ths " << i+1 << "s pleuras: " << endl;
		cin >> mhkos;
		sxima.set_mikos(i,mhkos);
	}
	
	cout << "H perimetros tou polipleurou einai: " << sxima.perimetros() << endl;
	
	return 0;
}
