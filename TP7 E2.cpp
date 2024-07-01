#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class asd
{
	private:
		int n1, n2;
		void mayor();
	public:
		void load();
};

void asd::load()
{
	cout<<"Ingrese un numero: ";
	cin>>n1;
	cout<<"Ingrese un numero: ";
	cin>>n2;
	mayor();
}
void asd::mayor()
{
	if(n1>n2) cout<<n1<<" es mayor a "<<n2;
	if(n2>n1) cout<<n2<<" es mayor a "<<n1;
	else cout<<"Los dos numeros son iguales";
}

int main()
{
	asd a;
	
	a.load();
	
	return 0;
}
