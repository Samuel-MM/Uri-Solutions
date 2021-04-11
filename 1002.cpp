#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
	//Declaração de variáveis
	double A;
	double R;
	double P;
	//Entrada de dados
	cin>>R;
	
	P=3.14159;//Valor de pi

	//Operação 	
	A=P*pow(R,2);
	
	//Saída de dados
	cout<<fixed<<setprecision(4)<<"A="<<A<<endl;

	return 0;
}