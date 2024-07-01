#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class CEmpleados
{
	private:
		string name;
		int hxd, pay;
	public:
		void load();
		void inc();
};

void CEmpleados::load()
{
	cout<<"Ingrese el nombre del empleado: ";
	getline(cin, name);
	cout<<"Ingrese las horas trabajadas por dia (8, 10 o +12): ";
	cin>>hxd;
	cout<<"Ingrese el salario del empleado: ";
	cin>>pay;
}
void CEmpleados::inc()
{
	if(hxd==8) pay=pay+250000;
	if(hxd==10) pay=pay+300000;
	if(hxd>=12) pay=pay+350000;
	
	cout<<endl;
	cout<<"Nombre: "<<name<<endl;
	cout<<"Salario final: "<<pay<<endl;
}

int main()
{
	CEmpleados a;
	
	a.load();
	a.inc();
	
	return 0;
}
