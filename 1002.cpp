#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
	//Declara��o de vari�veis
	double A;
	double R;
	double P;
	//Entrada de dados
	cin>>R;
	
	P=3.14159;//Valor de pi

	//Opera��o 	
	A=P*pow(R,2);
	
	//Sa�da de dados
	cout<<fixed<<setprecision(4)<<"A="<<A<<endl;

	return 0;
}