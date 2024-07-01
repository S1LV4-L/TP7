#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class CNumeros
{
	private:
		int n1, n2, n3;
	public:
		void load();
		void maxmin();
};

void CNumeros::load()
{
	cout<<"Ingrese el primer numero: ";
	cin>>n1;
	cout<<"Ingrese el segundo numero: ";
	cin>>n2;
	cout<<"Ingrese el tercer numero: ";
	cin>>n3;
}
void CNumeros::maxmin()
{
	cout<<endl;
	if(n1>=n2&&n1>=n3) cout<<"El maximo es: "<<n1<<endl;
	if(n2>=n1&&n2>=n3) cout<<"El maximo es: "<<n2<<endl;
	if(n3>=n1&&n3>=n2) cout<<"El maximo es: "<<n3<<endl;
	if(n1<=n2&&n1<=n3) cout<<"El minimo es: "<<n1<<endl;
	if(n2<=n1&&n2<=n3) cout<<"El minimo es: "<<n2<<endl;
	if(n3<=n1&&n3<=n2) cout<<"El minimo es: "<<n3<<endl;
}

int main()
{
	CNumeros a;
	
	a.load();
	a.maxmin();
	
	return 0;
}
