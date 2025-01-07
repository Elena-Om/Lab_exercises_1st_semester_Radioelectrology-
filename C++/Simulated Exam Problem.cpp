/*
Thema E3etasewn
Na periexei 4 methodous na thetoun tin timi kathe x,y,z kai h 4h kai ta tria mazi 
Na periexei alles 3 methodous pou tha epistrefoun tis times x,y,z kathemia
Na periexei 1 allh methodo gia thn emfanisi enos shmeiou x,y,z 
Na periexei 1 allh methodo h opoia tha metakinei ena apo ta x,y,z kata mia thesi (oso thesw) 
                           dld tha exw 2 orismata
*/

#include <iostream>
using namespace std;

class Sintetagmenes {
	private: 
	float ax,ay,az;
	
	public:
	void thetw_x (float x)
	{
		ax=x;
		//this->x=x; dld to x pou exw sthn klasi einai iso me to x pou erxetai apo main()
	}
	
	void thetw_y (float y)
	{
		ay=y;
		//this->y=y;
	}
	
	void thetw_z (float z)
	{
		az=z;
	}
	
	void thetw_ola (float x,float y, float z)
	{
		ax=x;
		ay=y;
		az=z;
	}
	
	float epistrofi_x()
	{
	   return ax;	
	}
	
	float epistrofi_y()
	{
	   return ay;	
	}
	
	float epistrofi_z()
	{
	   return az;	
	}
	
	void emfanisi ()
	{
		cout << "(" << ax << "," << ay << "," << az << ")" << endl;
	}
	
	void metakinisi (char axis,float thesi)
	{
		switch (axis)
		{
	    case 'x':
		ax=ax+thesi;
		cout << "The new value is: " << ax << endl;
		break;
		
		case 'y': 
		ay=ay+thesi;
		cout << "The new value is: " << ay << endl;
		break;
		
		case 'z': 
		az=az+thesi;
		cout << "The new value is: " << az << endl;
		break;
	    }
	}
}; 


int main()
{
	Sintetagmenes S1;
	float x1,y1,z1;
	
	S1.thetw_x(1);
	S1.thetw_y(2);
	S1.thetw_z(3);
	S1.thetw_ola(1.1,2.2,3.3);
	
	x1=S1.epistrofi_x();
	y1=S1.epistrofi_y();
	z1=S1.epistrofi_z();
	
	S1.emfanisi();
	
	S1.metakinisi('x',1.1);
	S1.metakinisi('y',2.2);
	S1.metakinisi('z',3.3);
	
	return 0;
}
