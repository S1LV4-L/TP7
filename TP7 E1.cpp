#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class entero
{
	private:
		int a;
	public:
		void load();
		void num();
};

void entero::num()
{
	for(int i=1; i<=a; i++) cout<<i<<endl;
}
void entero::load()
{
	cout<<"Ingrese un numero: ";
	cin>>a;
	num();
}

int main()
{
	entero n;
	
	n.load();
	
	return 0;
}
