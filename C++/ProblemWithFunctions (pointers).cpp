#include <iostream>
using namespace std;

void function1(int* x);
void function2(int* x);
void function3(int* x);
void multiply(int* x,int* y,int* ginomeno);
void division(int* x, int* y, float* piliko);
void sum(float* x, float* y, float* athroisma);

int main()
{
	int i=6,sun1=0,sun2=0,sun3=0,ginomeno=0;
	float piliko=0,athroisma=0;
	
	int *ii, *fun1, *fun2, *fun3, *gin;
	float *diairesi, *athrisi;
	
	ii=&i;
	fun1=&sun1;
	fun2=&sun2;
	fun3=&sun3;
	gin=&ginomeno;
	diairesi=&piliko;
	athrisi=&athroisma;
	
	
	for (i=6;i>0;i++)
	{
		*fun1=i;
		function1(fun1);
		
		*fun2=i;
		function2(fun2);
		
		*fun3=i;
		function3(fun3);
		
		multiply(fun1,fun2,gin);
		division(gin,fun3,diairesi);
		sum(athrisi,diairesi,athrisi);
		    
		if (athroisma>500)
          break;
			  		
		cout << "To sum einai: " << athroisma << endl;
	}
	
	return 0;
}

void function1(int* x)
{
 	*x-=1;
}
 
void function2(int* x)
{
 	*x+=3;
}
 
void function3(int* x)
{ 
 	*x-=5;
}
 
void multiply(int* x, int* y,int* ginomeno)
{
	*ginomeno=(*x)*(*y);
}

void division(int* x, int* y, float* piliko)
{
	*piliko=(float)(*x)/(*y);
}

void sum(float* x, float* y, float* athroisma)
{
   *athroisma=(*x)+(*y);
}
