#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int tempo;//tempo gasto na viagem
	int vm;//velocidade media
	int dist;//distancia percorrida
	float gasto;//combustivel necessário
	
	//Entrada de dados
	cin>>tempo;
	cin>>vm;
	
	//Cálculo
	dist=vm*tempo;
	gasto=dist/12.0;
	
	//Saída de dados
	cout<<fixed<<setprecision(3);
	cout<<gasto<<endl;
	return 0;
}