#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int tempo;//tempo gasto na viagem
	int vm;//velocidade media
	int dist;//distancia percorrida
	float gasto;//combustivel necess�rio
	
	//Entrada de dados
	cin>>tempo;
	cin>>vm;
	
	//C�lculo
	dist=vm*tempo;
	gasto=dist/12.0;
	
	//Sa�da de dados
	cout<<fixed<<setprecision(3);
	cout<<gasto<<endl;
	return 0;
}