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
		int n, a;
		vector<int> perf;
		void perfect();
	public:
		void load();
};

void CNumeros::load()
{
	cout<<"Ingrese un numero: ";
	cin>>n;
	perfect();
}
void CNumeros::perfect()
{
	int resto, c;
	
	for(int j=1; j<=n; j++)
	{
		c=0;
		resto=0;
		
	    for (int i=1; i<j ; i++)           // < y no <= porque el propio numero no cuenta
	    {
		    resto=j%i;
		    if (resto==0) c=c+i;          //encuentra divisores y los suma
	    }
	    if(c==j) perf.push_back(j);
    }
    
    cout<<"Numeros perfectos del 1 al "<<n<<":"<<endl;
    for(int i=0; i<=perf.size()-1; i++) cout<<perf[i]<<endl;
}

int main()
{
	CNumeros w;
	
	w.load();
	
	return 0;
}
