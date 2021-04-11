#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Entrada de dados
	int X;//Distancia percorrida
	double Y;// Total de combustivel gasto
	double Z;// Valor para atribuir a operação
	
	//Entrada de dados
	cin>>X;
	cin>>Y;
	
	//Processamento
	Z=X/Y;
	
	//Saída de dados
	cout<<fixed<<setprecision(3)<<Z<<" km/l"<<endl;
	
	return 0;
}